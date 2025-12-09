#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};

struct node* createnode(int value){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    return newnode;
}

void insertbegin(struct node** newhead,int newdata){
   struct node* newnode= createnode(newdata);
   newnode->next = *newhead;
   * newhead = newnode;
}

void printlist(struct node* head){
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d ->",temp -> data);
        temp=temp -> next;
    }
    printf("NULL\n");
}

int main(){
    struct node*head=createnode(10);
    struct node*second=createnode(20);
    struct node*third=createnode(40);
    struct node*fourth=createnode(30);
    struct node*fifth=createnode(50);


    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;



    printf("The original linked list is as follows: ");
    printlist (head);

    insertbegin(&head,5);
    insertbegin(&head,6);
    printf("\n\nAfter insertion at beginning: ");
    printlist(head);
    printf("\n");


    return 0;
}



