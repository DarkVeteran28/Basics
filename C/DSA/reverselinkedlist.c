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
struct node*reverse(struct node*head){
    struct node* prev=NULL;
    struct node* curr=head;
    struct node* next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
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

    printf("The linked list is as follows: ");
    printlist (head);

    head=reverse(head);

    printf("The  reversed linked list is as follows: ");
    printlist (head);
    
    return 0;
}



