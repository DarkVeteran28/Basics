#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;

};
struct node*createnode(int newdata){
    struct node*newnode=(struct node*)malloc(sizeof(newnode));
    newnode->data=newdata;
    newnode->next=NULL;
    return newnode;
}
void printlist(struct node*head){
    struct node*temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");

}
int main(){
    struct node* head=createnode(20);
    struct node* second=createnode(20);
    struct node* third=createnode(20);
    struct node* fourth=createnode(20);

    head->next=second;
    second->next=third;
    third->next=fourth;

    printf("The list is: ");
    printlist(head);

}