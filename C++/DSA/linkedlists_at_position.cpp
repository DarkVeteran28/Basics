#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insertatpos(node*&head,int pos, int val){
    node* newnode= new node(val);
    if(pos==1){
        newnode->next=head;
        head=newnode;
        return;
    }
    node*temp=head;
    for(int i=1; i<pos-1 && temp!=NULL; i++){
        temp=temp->next;
    }
    if(temp==NULL)return;
    newnode->next= temp->next;
    temp->next=newnode;
}
int main(){
    node* head= new node(10);
    node* second= new node(20);
    node* third= new node(30);

    head->next=second;
    second->next= third;

    insertatpos( head, 2, 99);

    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    return 0;
}
