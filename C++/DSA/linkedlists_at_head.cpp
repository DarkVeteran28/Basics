#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node*next; //POINTER TO NEXT NODE

    //CONSTRUCTOR
    node(int value){
        data=value;
        next=NULL;
    }
};

void insertathead(node* &head, int val){
    node*newnode= new node(val);
    newnode->next=head;
    head=newnode;

}
int main(){
    node*head= new node(10);
    node*second= new node(20);
    node*third= new node(30);


    head ->next=second;
    second ->next=third;

    //Insertion at head of linked list
    insertathead(head,0);

    //printing

    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null"<<endl;
    return 0;
    
}