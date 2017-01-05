//
// Created by aaron@vcra.net on 31/10/16.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char  title[100];
    char  author[60];
    long  ISBN;
    struct node * next;
};
struct node *head = NULL;
struct node *current = NULL;

void printList(){
    struct node *ptr = head;
    while (ptr!=NULL){//Check if we have reached the end of the array
        printf("(%s - %s - %ld) \n", ptr->title, ptr->author, ptr->ISBN);
        ptr=ptr->next;
    }
}



void add(char newTitle[100], char newAuthor[60], long newISBN) {
    struct node *ptr = head;
    if (ptr == NULL) { //Its the very first item
        struct node *link = (struct node *) malloc(sizeof(struct node));
        strcpy(link->title, newTitle);
        strcpy(link->author, newAuthor);
        link->ISBN = newISBN;
        link->next = NULL;

        head = link;
        current = link;
    } else { //It isn't the first item and we need to find where to put it in the array
        while(1){
            if (newISBN < head->ISBN) {//The current item needs to go in the head
                struct node *oldNext = head;
                head = (struct node *) malloc(sizeof(struct node));//store new head as memaloc
                head->next = oldNext;
                strcpy(head->title, newTitle);
                strcpy(head->author, newAuthor);
                head->ISBN = newISBN;
                break;
            } else if (ptr->next == NULL) {//We have reached the end of the array
                ptr->next = (struct node *) malloc(sizeof(struct node));
                strcpy(ptr->next->title, newTitle);
                strcpy(ptr->next->author, newAuthor);
                ptr->next->ISBN = newISBN;
                ptr->next->next = NULL;
                current=ptr->next;
                break;
            } else if (newISBN > ptr->ISBN) { //Its higher than the current
                if (newISBN < (ptr->next->ISBN)) {//Its inbetween the current and the next
                    struct node *oldNext = ptr->next;//store ptr next in temp
                    ptr->next = (struct node *) malloc(sizeof(struct node));
                    ptr->next->next = oldNext;
                    strcpy(ptr->next->title, newTitle);
                    strcpy(ptr->next->author, newAuthor);
                    ptr->next->ISBN = newISBN;
                    break;
                }
                else {
                    ptr = ptr->next;
                }
            } else {
                //We have probably broken something
                //Go onto the next item of the array for lolz
                printf("fuck");
                ptr = ptr->next;
            }
        }
    }
}


void searchByISBN(long findISBN){
    struct node *ptr = head;
    while (ptr!=NULL){//Check if we have reached the end of the array
        long thisISBN = (ptr->ISBN);
        if (thisISBN==findISBN){
            printf("!! %s - %s - %ld !!\n", ptr->title, ptr->author, ptr->ISBN);
            break;
        }
        else{
            ptr=ptr->next;
        }
    }
}

int main() {
    add("Hello, its me", "Mr bob", 7);
    add("Exams101", "Dr. Dave", 5);
    add("Linux into Putty", "Josh Gadd", 6);
    printList();
    searchByISBN(5);
}
