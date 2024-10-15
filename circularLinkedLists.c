#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void createLinkedList(struct Node *);
void displayLinkedList(struct Node *);

struct Node *head;

int main(){
    head=(struct Node *)malloc(sizeof(struct Node));
    createLinkedList(head);
    displayLinkedList(head);
}

//Creating of Linked List
void createLinkedList(struct Node *ptr){
    printf("Enter the data: ");
    scanf("%d", &ptr->data);
    ptr->next=head;
    printf("Do you want to continue? Press Y to continue and N to decontinue\n");
    char ch;
    scanf(" %c", &ch);
    if(ch=='Y' || ch=='y'){
        ptr->next=(struct Node *)malloc(sizeof(struct Node));
        ptr=ptr->next;
        createLinkedList(ptr);
    }
}

//Traversal in Linked List
void displayLinkedList(struct Node *ptr){
    printf("The linked list is: \n");
    do{
        printf("%d ", ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}
