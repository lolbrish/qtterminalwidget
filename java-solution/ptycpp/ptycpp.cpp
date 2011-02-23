#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>
#include <pwd.h>
#include <termios.h>
#include <sys/ioctl.h>

#define	BUFFSIZE	512

static volatile sig_atomic_t sigcaught; // set by signal handler

typedef	void Sigfunc(int); // for signal handlers

Sigfunc* signal_intr(int signo, Sigfunc *func)
{
	struct sigaction	act, oact;

	act.sa_handler = func;
	sigemptyset(&act.sa_mask);
	act.sa_flags = 0;
#ifdef	SA_INTERRUPT
	act.sa_flags |= SA_INTERRUPT;
#endif
	if (sigaction(signo, &act, &oact) < 0)
		return(SIG_ERR);
	return(oact.sa_handler);
}

/*
 * The child sends us SIGTERM when it gets EOF on the pty slave or
 * when read() fails.  We probably interrupted the read() of ptym.
 */
static void
sig_term(int signo)
{
	sigcaught = 1;		/* just set flag and return */
}

ssize_t  // Write "n" bytes to a descriptor
writen(int fd, const void *ptr, size_t n)
{
	size_t		nleft;
	ssize_t		nwritten;

	nleft = n;
	while (nleft > 0) {
		if ((nwritten = write(fd, ptr, nleft)) < 0) {
			if (nleft == n)
				return(-1); /* error, return -1 */
			else
				break;      /* error, return amount written so far */
		} else if (nwritten == 0) {
			break;
		}
		nleft -= nwritten;
		ptr   += nwritten;
	}
	return(n - nleft);      /* return >= 0 */
}

void
loop(int ptym, int ignoreeof)
{
    pid_t	child;
    int		nread;
    char	buf[BUFFSIZE];
    
    if ((child = fork()) < 0) {
	//err_sys("fork error");
	printf("fork error\n");
    } else if (child == 0) {	/* child copies stdin to ptym */
	for ( ; ; ) {
	    if ((nread = read(STDIN_FILENO, buf, BUFFSIZE)) < 0) {
		//err_sys("read error from stdin");
		printf("read error from stdin\n");
	    }
	    else if (nread == 0)
		break;		/* EOF on stdin means we're done */
	    if (writen(ptym, buf, nread) != nread) {
		//err_sys("writen error to master pty");
		printf("writen error to master pty\n");
	    }
	}
	
	/*
	 * We always terminate when we encounter an EOF on stdin,
	 * but we notify the parent only if ignoreeof is 0.
	 */
	if (ignoreeof == 0)
	    kill(getppid(), SIGTERM);	/* notify parent */
	exit(0);	/* and terminate; child can't return */
    }
    
    /*
     * Parent copies ptym to stdout.
     */
    if (signal_intr(SIGTERM, sig_term) == SIG_ERR) {
	//err_sys("signal_intr error for SIGTERM");
	printf("signal_intr error for SIGTERM\n");
    }
    
    for ( ; ; ) {
	if ((nread = read(ptym, buf, BUFFSIZE)) <= 0)
	    break;		/* signal caught, error, or EOF */
	if (writen(STDOUT_FILENO, buf, nread) != nread) {
	    //err_sys("writen error to stdout");
	    printf("writen error to stdout\n");
	}
    }
    
    /*
     * There are three ways to get here: sig_term() below caught the
     * SIGTERM from the child, we read an EOF on the pty master (which
     * means we have to signal the child to stop), or an error.
     */
    if (sigcaught == 0)	/* tell child if it didn't send us the signal */
	kill(child, SIGTERM);
    /*
     * Parent returns to caller.
     */
}


// based on apiue/putty.
int main(int argc, char** argv) {
    int masterfd;
    int slavefd;
    int ptsnameBufferSize = 30;
    char ptsnameBuffer[ptsnameBufferSize];
    pid_t pid;
    int interactive;

    struct termios orig_termios;
    struct winsize size;
	
    interactive = isatty(STDIN_FILENO);

    if (interactive) {
      if (tcgetattr(STDIN_FILENO, &orig_termios) < 0) {
	printf("ERROR: tcgetattr error on stdin\n");
	exit(EXIT_FAILURE);
      }
      if (ioctl(STDIN_FILENO, TIOCGWINSZ, (char *) &size) < 0) {
	printf("ERROR: TIOCGWINSZ error\n");
	exit(EXIT_FAILURE);
      }
    }

    masterfd = posix_openpt(O_RDWR);
	
    if(masterfd < 0) {
	printf("ERROR: /dev/ptmx: open\n");
	exit(EXIT_FAILURE);
    }

    // grant access to the slave pseudo-terminal
    if(grantpt(masterfd) < 0) {
	close(masterfd);
	printf("ERROR: grantpt\n");
	exit(EXIT_FAILURE);
    }

    // unlock a pseudo-terminal master/slave pair
    if(unlockpt(masterfd) < 0) {
	close(masterfd);
	printf("ERROR: unlockpt\n");
	exit(EXIT_FAILURE);
    }

    // user the reentrant verstion of ptsname...
    if(ptsname_r(masterfd, ptsnameBuffer, ptsnameBufferSize) != 0) {
	close(masterfd);
	return(EXIT_FAILURE);
    }

    /*
    {
	// make masterfd non-blocking... uxpty.c from putty
	// TODO rewrite / add error handling...
	int fl;
	fl = fcntl(masterfd, F_GETFL);
	if (fl != -1 && !(fl & O_NONBLOCK))
	    fcntl(pty->master_fd, F_SETFL, fl | O_NONBLOCK);
    } 
    */

    if((pid = fork()) < 0) {
	printf("ERROR: forking\n");
	close(masterfd);
	exit(EXIT_FAILURE); 
    } else if(pid == 0) { 
	// child
	
	// creates a session and sets the process group ID
	if(setsid() < 0) {
	    printf("ERROR: setsid\n");
	    close(masterfd);
	    exit(EXIT_FAILURE);
	}

	// open slavefd
	if((slavefd = open(ptsnameBuffer, O_RDWR)) < 0) {
	    printf("ERROR: setsid\n");
	    close(masterfd);
	    exit(EXIT_FAILURE);	    
	}

	close(masterfd);

	if (interactive) {
	  if (tcsetattr(slavefd, TCSANOW, &orig_termios) < 0) {
	    printf("tcsetattr error on slave pty\n");
	    exit(EXIT_FAILURE);	    
	  }
	  if (ioctl(slavefd, TIOCSWINSZ, &size) < 0) {
	    printf("TIOCSWINSZ error on slave pty\n");
	    exit(EXIT_FAILURE);	    
	  }
	}

	// Slave becomes stdin/stdout/stderr of child.
	if(dup2(slavefd, STDIN_FILENO) != STDIN_FILENO) {
	    printf("ERROR: dup2 stdin\n");
	    exit(EXIT_FAILURE);	    
	}
	if(dup2(slavefd, STDOUT_FILENO) != STDOUT_FILENO) {
	    printf("ERROR: dup2 stdout\n");
	    exit(EXIT_FAILURE);	    
	}
	if(dup2(slavefd, STDERR_FILENO) != STDERR_FILENO) {
	    printf("ERROR: dup2 stderr\n");
	    exit(EXIT_FAILURE);	    
	}
	if(slavefd != STDIN_FILENO && 
	    slavefd != STDOUT_FILENO &&
	    slavefd != STDERR_FILENO) {
	    close(slavefd);
	}

	struct passwd *pass;
	// there is an _r version too...
	pass = getpwuid(getuid());
	if((pass != NULL) && (pass->pw_shell != NULL)) {
	  //if (execlp(pass->pw_shell, pass->pw_shell, 0) < 0) {
	  if (execlp(pass->pw_shell, "/bin/ls", 0) < 0) {
	    printf("ERROR: pwuid exec failed\n");		
	  }
	}

	char* shellEnv = getenv("SHELL");
	if(shellEnv != NULL) {
	  if (execvp(shellEnv, NULL) < 0) {
		printf("ERROR: SHELL exec failed\n");		
	    }
	}

	printf("ERROR: exec issues\n");
	exit(EXIT_FAILURE);	    
    } 

    // else { // parent
    //masterfd...
    // TODO rewrite loop code to be non-blocking...
    loop(masterfd, 0);
}

