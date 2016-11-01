#include <stdio.h>
#include <string.h>
int main() {
    char myString1[30];
    char myString2[30];
    char myString3[60];
    int size;

    printf("Enter String 1");
    scanf(" %[0-9a-zA-Z ]",myString1);
    printf("Enter String 2");
    scanf(" %[0-9a-zA-Z ]",myString2);
    strcpy(myString3, myString1);
    strcat(myString3, " ");
    strcat(myString3, myString2);
    printf("%s", myString3);
}