#include<stdio.h>


// This is the most basic linked list construction program. It is for giving an idea about how linked list can be represented in C.
// Linked list node
struct node 
{
    int data;
    struct node* next;
};

/**
 * Prints all the elements in the list
 **/
void printList(struct node* head){
    struct node* current = head;
    while(current!=NULL){
        printf("%d", current->data);
        current = current->next;
    }
}

int main(){

    // It is a good practice to declare all the variables at the top in C.
    struct node* head = NULL;
    struct node* second = NULL;

    // Allocate memory to the first node.
    head = (struct node*) malloc(sizeof(struct node*));

    head->data = 1;
    head->next = NULL;

    // Allocate memory to the second node.
    second = (struct node*) malloc(sizeof(struct node*));

    second->data = 2;
    second->next = NULL;

    head->next = second;

    printList(head);

    return 0;
}