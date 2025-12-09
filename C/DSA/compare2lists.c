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

void printlist(struct node* head){
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d ->",temp -> data);
        temp=temp -> next;
    }
    printf("NULL\n");
}

int comparelists(struct node*head1,struct node*head2){
    while(head1!=NULL && head2!=NULL){
        if(head1->data != head2->data){
            return 0;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return(head1==NULL && head2==NULL);
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
}



