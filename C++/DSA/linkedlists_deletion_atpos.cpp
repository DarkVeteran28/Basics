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

void deleteatpos(node*&head, int pos){
    node* temp=head;
    for(int i=1; i<pos-1 && temp!=NULL; i++){
        temp= temp->next;
    }
    if(temp==NULL || temp->next==NULL)return;
    node* todelete= temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
int main(){
    node *head= new node(10);
    node *second= new node(20);
    node *third= new node(30);

    head->next=second;
    second->next=third;

    deleteatpos(head,2);

    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    return 0;
}