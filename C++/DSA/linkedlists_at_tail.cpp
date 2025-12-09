#include<iostream>
using namespace std;
class node{
    public:
          int data;
          node*next;//pointer for next node

          //constructor
          node(int val){
            data=val;
            next=NULL;
          }
};

void insertatend( node* &head, int val){
    node *newnode= new node(val);
    if(head==NULL){
        head=newnode;
        return;
    }
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}
int main(){
    node*head= new node(10);
    node*second= new node(20);
    node*third= new node(30);

    head->next=second;
    second ->next =third;

    insertatend(head, 40);

    //printing 

    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    return 0;

}
