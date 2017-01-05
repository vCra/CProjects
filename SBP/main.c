#define PORT 40000
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <strings.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <unistd.h>

#define TRUE  1
#define FALSE 0



int main(int argc, char** argv) {

    struct sockaddr_in ourself;
    int socketid = -1;
    int t;
    FILE *inchannel, *outchannel;

    fprintf(stdout, " Signal Box Program (SBP)\n\n");

    socketid = socket(AF_INET, SOCK_STREAM, 0);

    if (socketid < 0) {
        fprintf(stdout, " Couldnt create socket. ");
    }


    int z; /* Status code */
    int so_reuseaddr = TRUE;
    z = setsockopt(socketid, SOL_SOCKET, SO_REUSEADDR, &so_reuseaddr, sizeof so_reuseaddr);
    printf("setsockopt returned %d\n", z);

    ourself.sin_family = AF_INET;
    ourself.sin_addr.s_addr = INADDR_ANY;
    ourself.sin_port = htons(PORT);

    if (bind(socketid, (struct sockaddr *) &ourself, sizeof(ourself)) < 0) {
        (void) close(socketid);
        fprintf(stdout, " Couldn't bind to socket error ");
    }

    listen(socketid, 10);

    for (;;) {
        listenLoop(socketid, t, outchannel, inchannel);
        //return (EXIT_SUCCESS);
    }
}
void put(int sidingNumber, int number){

}



void load(int sid1, int sid2, int sid3){

}
int auth(FILE * outchannel, FILE * inchannel){
    char buffer[256];
    bzero(buffer, 255);

    int c = rec(inchannel, buffer, 256);
    fprintf(outchannel, "Welcome %s", buffer);

}
void onConnect(FILE * outchannel, FILE * inchannel){
    char * uid = "aaw13";
    fprintf(outchannel, "Inglenook Sidings %s\n", uid);
    auth(outchannel, inchannel);
}

int listenLoop(int socketid, int t, FILE * outchannel, FILE * inchannel){
    unsigned int len_otherend;
    struct sockaddr_in otherend;

    /* Wait for connection. */
    fprintf(stdout, "About to accept..\n");
    do {
        errno = 0; // to make sure we don't react to an old error
        len_otherend = sizeof (otherend);
        t = accept(socketid, (struct sockaddr *) & otherend,
                   &len_otherend);
    } while (t < 0 && errno == EINTR);

    if (t < 0) {
        fprintf(stderr, " Couldnt accept; waiting..\n");
        sleep(5);
    }

    fprintf(stdout, "Connected OK, so it would seem\n");

    outchannel = fdopen(t, "w"); // has type FILE *


    onConnect(outchannel, inchannel);

    fflush(outchannel);
    close(t);
}
