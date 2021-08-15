#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int x){
        data=x;
        next=prev=NULL;
    }
};
void insertAthead(node* &head,int val){
    node* n= new node(val);
      n->next=head;
    if(head!=NULL){
       head->prev=n;
    }
    head=n;
}
void insertAttail(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
      insertAthead(head,val);
      return;
    }
    node* temp = head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;  
}
void Display(node* head){
    while (head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }cout<<"NULL"<<endl;
}
void Delete_front(node* &head,int pos){
    if(head==NULL){
        return;
    }
    node* temp=head;
    if(pos==1){
       head=head->next;
       head->prev=NULL;
       delete temp;
       return;
    }
    int _c=1;
    while (temp->next!=NULL and _c!=pos)
    {
        temp=temp->next;
        _c++;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL)
    temp->next->prev=temp->prev;
    delete temp;
}
void deleteTail(node* head){
    node* temp =head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->prev->next=NULL;
    delete temp; 
}

int main(){
    node* head = NULL;
    insertAttail(head,1);
    insertAttail(head,2);
    insertAttail(head,3);
    insertAttail(head,4);
    insertAttail(head,5);
    Display(head);

}