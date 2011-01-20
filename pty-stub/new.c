
#include "putty.h"

/*
 * askappend can return four values:
 * 
 *  - 2 means overwrite the log file
 *  - 1 means append to the log file
 *  - 0 means cancel logging for this session
 *  - -1 means please wait.
 */
int askappend(void *frontend, Filename filename,
    void (*callback)(void *ctx, int result), void *ctx) {
    return 2;
}

void fatal_message_box(void *window, char *msg) {
    printf("fatal_message_box: %s\n", msg);}


void fatalbox(char *msg, ...) {
    printf("fatalbox: %s\n", msg);
}
