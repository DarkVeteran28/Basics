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

void insertend(struct node** head,int newdata){
    struct node*newnode= createnode(newdata);
    
    if(*head==NULL){
        *head=newnode;
        return;
    }
    struct node* temp= *head;
    while( temp->next != NULL){
        temp=temp->next;
    }
    temp->next=newnode;
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

    printf("The updated linkedlist is as follows: \n");
    insertend(&head,78);
    insertend(&head,48);
    printlist(head);
}




