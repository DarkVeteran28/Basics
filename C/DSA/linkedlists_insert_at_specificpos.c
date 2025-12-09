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

void insertpos(struct node** head,int newdata,int pos){
    struct node* newnode= createnode(newdata);
    if(pos==1){
        newnode->next=*head;
        *head= newnode;
        return;
    }
    struct node* temp=*head;
    for(int i= 1; temp!=NULL && i<pos-1 ; i++){
        temp= temp-> next;
    }
    if(temp == NULL){
        printf("position out of range..");
        return;
    }
    newnode->next = temp->next;
    temp->next = newnode;
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

    printf("The updated linked list is as follows: ");
    insertpos(&head,45,3);
    insertpos(&head,87,5);

    printlist (head);
}



