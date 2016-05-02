#include<stdio.h>


// This is the most basic linked list construction program. It is for giving an idea about how linked list can be represented in C.
// Linked list node
struct node 
{
    int data;
    struct node* next;
};

typedef struct node listnode;

/**
 * Prints all the elements in the list
 **/
void printList(listnode* head){
    listnode* current = head;
    while(current!=NULL){
        printf("%d", current->data);
        current = current->next;
    }
}


/**
 * Module to create new node.
 */
listnode* newNode(int data){
    listnode* newNode = NULL;
    newNode = (listnode*) malloc(sizeof(listnode*));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main(){

    // It is a good practice to declare all the variables at the top in C.
    listnode* head = NULL;
    listnode* second = NULL;

    // The code is cleaner now!

    head = newNode(1);
    second = newNode(2);

    head->next = second;

    printList(head);

    return 0;
}