/*
* File: newmain.c
* Author: dap, 28th October 2016
*/
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/stat.h>
int main(int argc, char** argv) {
    printf("Enter the path of dir: ");
    char dirString[400];
    scanf(" %[0-9a-zA-Z/.@ ]",dirString);
    DIR * current_directory_ptr; /* DIR is a type from dirent.h */
    struct dirent * next_entry_ptr; /* struct dirent is from dirent.h */
    current_directory_ptr = opendir(dirString);
    next_entry_ptr = readdir(current_directory_ptr);
    while (next_entry_ptr != NULL)
    {
        printf("File has inode number %d and is called %s\n",
               (int) next_entry_ptr->d_ino, next_entry_ptr->d_name);
        next_entry_ptr = readdir(current_directory_ptr);
    }
    printf("Enter the name of file: ");
    char findFile[400];
    scanf(" %[0-9a-zA-Z/.@ ]",findFile);
    struct stat fileStat;
    stat(findFile, &fileStat);
    printf("This has %d links", fileStat.st_nlink);
    closedir(current_directory_ptr);
    return (EXIT_SUCCESS);
}