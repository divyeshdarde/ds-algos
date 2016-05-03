#include<stdio.h>


// This is the most basic linked list construction program. It is for giving an idea about how linked list can be represented in C.
// Linked list node
struct node 
{
    int data;
    struct node* next;
};

// Using typedefs makes things much cleaner and readable.
// You dont have to write struct everywhere.

// We could also have included the pointer in the typedef and make the code Java-like:
// typedef struct node* listnode;
// While declaring: listnode node;
// But doing so hides the pointer and might make things difficult to debug and hence isnt a recommended coding practice.
typedef struct node listnode;

/**
 * Prints all the elements in the list
 **/
void printList(listnode* head){
    listnode* current = head;
    while(current!=NULL){
        printf("%d ", current->data);
        current = current->next;
    }
}

listnode* newNode(int data);

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

void append(listnode** head, int newElement){
    listnode* appendNode = newNode(newElement);
    listnode* current = *head;
    if(*head == NULL){
        *head = appendNode;
        return;
    }

    // Bring current till the last element in the list.
    while(current->next != NULL){
        current = current->next;
    }

    current->next = appendNode;
}

/**
 * Returns 1 if linked list contains a lopp, else 0.
 */
int detectLoop(listnode** head){
    //TODO
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
    append(&head, 5);
    append(&head, 6);

    printList(head);

    return 0;
}