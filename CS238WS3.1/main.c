//
// Created by aaron@vcra.net on 31/10/16.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* http://www.learn-c.org/en/Linked_lists */
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
        struct node *ptr = head;
        int added = 0;
        while(!added){
            if (newISBN < head->ISBN) {//The current item needs to go in the head
            added=1;
            } else if (ptr->next == NULL) {//We have reached the end or the array
                //add to the end of the array
            } else if (newISBN > ptr->ISBN) { //Its higher than the current
                if (newISBN < (ptr->next->ISBN)) {//Its inbetween the current and the next
                }
            } else {
                //We have probably broken something
                //Go onto the next item of the array for lolz
                ptr=ptr->next;
                added=1;
        }
    }
}

        ptr=ptr->next;
        }

            if (ptr->next==null){//We have reached the end of the array.
            //ptr = ptr->next;//Move on to the next item
            if (ptr-> next->next = NULL) {
                ptr->next = (struct node *) malloc(sizeof(struct node));

            }
            if (newISBN < ptr->ISBN) {//If the new number is higher than the current we need to
                if (head == ptr) {//Its the lowest in the list so far
                    struct node *oldNext = ptr->next;
                    //store previous head as oldnext
                    head = (struct node *) malloc(sizeof(struct node));//store new head as memaloc
                    head->next = oldNext;
                    strcpy(head->title, newTitle);
                    strcpy(head->author, newAuthor);
                    head->ISBN = newISBN;

                } else
                    if (newISBN < ptr->next->ISBN) {
                        struct node *oldNext = ptr->next;//store ptr next in temp
                        ptr->next = (struct node *) malloc(sizeof(struct node));
                        ptr->next->next = oldNext;
                        strcpy(ptr->next->title, newTitle);
                        strcpy(ptr->next->author, newAuthor);
                        ptr->next->ISBN = newISBN;
                        //change ptr next to memaloc
                        //store data
                        //change ptr next next to temp

                    }
                }
            } else {
                struct node *oldNext = ptr->next;
                ptr->next = (struct node *) malloc(sizeof(struct node));
                strcpy(ptr->next->title, newTitle);
                strcpy(ptr->next->author, newAuthor);
                ptr->next->ISBN = newISBN;
                ptr->next->next = NULL;

                current = ptr->next;
            }
        }
        else {
                ptr = ptr->next;
            }
        }
    }
};

void searchByISBN(long findISBN){
    struct node *ptr = head;
    while (ptr!=NULL){//Check if we have reached the end of the array
        long thisISBN = (long) (ptr->ISBN);
        if (thisISBN==findISBN){
            printf("!! %s - %s - %ld) !!\n", ptr->title, ptr->author, ptr->ISBN);
            break;
        }
        else{
            ptr=ptr->next;
        }
    }
}

int main() {
    add("Hello, its me", "Mr bob", 123);
    add("Exams101", "Dr. Dave", 567);
    add("Linux into Putty", "Josh Gadd", 523);
    printList();
    searchByISBN(567);
}
