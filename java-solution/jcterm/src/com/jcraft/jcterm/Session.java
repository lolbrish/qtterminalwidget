package com.jcraft.jcterm;

import java.io.*;

public class Session {
    Process proc;

    public boolean isConnected() {
	System.out.println("Session.isConnected");
	return true;
    }

    public void disconnect() {
	System.out.println("Session.disconnect");
    }

    public void setServerAliveInterval(int ms) {
	System.out.println("Session.setServerAliveInterval");
    }

    public void connect(int ms) {
	System.out.println("Session.connect");
    }

    public void setPassword(String pw) {
	System.out.println("Session.setPassword");
    }

    public void setTimeout(int ms) {
	System.out.println("Session.setTimeout");
    }

    public Channel openChannel() throws IOException {
	System.out.println("Session.openChannel");
	proc = Runtime.getRuntime().exec("/home/luke/src/terms/apinue/apue.2e/pty/pty /bin/bash");
	return new Channel(proc.getInputStream(), proc.getOutputStream());
    }
}