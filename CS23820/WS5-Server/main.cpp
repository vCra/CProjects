/* 
 * File:   lambmain.c
 * Author: dap
 * Dave's Lamb Server
 *
 * Updated on October 30th, 2016
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <unistd.h>

#define error(param) { fprintf(stderr, "Lamb Server program: ");\
                        fprintf param ; }

#define abort(param) { fprintf(stderr, "Lamb Server program: ");\
                        perror (param) ;\
                        exit(1) ; }
#define LAMBPORT 40000

int main(int argc, char** argv) {

    struct sockaddr_in ourself;
    int socketid = -1;
    int t;
    FILE *inchannel, *outchannel; // we only use outchannel

    fprintf(stdout, " Daves Lamb Server.\n\n\n");

    socketid = socket(AF_INET, SOCK_STREAM, 0);

    if (socketid < 0)
    abort(" Couldnt create socket. ");

#define TRUE  1
#define FALSE 0
    int z; /* Status code */
    int so_reuseaddr = TRUE;
    z = setsockopt(socketid, SOL_SOCKET, SO_REUSEADDR, &so_reuseaddr, sizeof so_reuseaddr);

    printf("setsockopt returned %d\n", z);

    ourself.sin_family = AF_INET;
    ourself.sin_addr.s_addr = INADDR_ANY;
    ourself.sin_port = htons(LAMBPORT);

    if (bind(socketid, (struct sockaddr *) & ourself, sizeof (ourself)) < 0) {
        (void) close(socketid);
        abort(" Couldn't bind to socket error ");
    }

    listen(socketid, 10);

    for (;;) {
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
            error((stderr, " Couldnt accept; waiting..\n"));
            sleep(5);
            continue;
        }

        fprintf(stdout, "Connected OK, so it would seem\n");

        outchannel = fdopen(t, "w"); // has type FILE *

        fprintf(outchannel, "Lamb Poem service .\n");
        fprintf(outchannel, "Mary had a little lamb\n");
        fprintf(outchannel, "Its fleece was as white as snow\n");
        fprintf(outchannel, "Everywhere that Mary went\n");
        fprintf(outchannel, "The lamb was sure to go.\n");

        fflush(outchannel);
        close(t);

    }
    return (EXIT_SUCCESS);
}