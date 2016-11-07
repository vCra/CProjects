/*
* File: main.c
* Author: dap, 28th October 2016
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char** argv) {
    printf("Enter the path of a file: ");
    char fileString[400];
    scanf(" %[0-9a-zA-Z/.@ ]",fileString);
    char my_buffer[100];
    ssize_t status; /* note the type is defined in unistd.h */
    int i;
    /* Note, STDIN_FILENO is a macro defined in unistd which has the value 0,
    that is, the file descriptor number of standard input
    */status = read(open(fileString, O_RDONLY), my_buffer, sizeof(my_buffer));
    printf("We read in %d bytes\n", (int) status);
    for (i=0; i< status ; i++)
    {
        printf("The code of byte %d is %d\n", i, my_buffer[i]);
        status = read(open(fileString, O_RDONLY), my_buffer, sizeof(my_buffer));
        printf("We read in %d bytes\n", (int) status);
    }
    return (EXIT_SUCCESS);
}