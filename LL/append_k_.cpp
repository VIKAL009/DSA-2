#include<bits/stdc++.h>
using namespace std;
class node{
   public:
   int data;
   node* next;
   node(int x){
       data=x;
       next=NULL;
   }
};
void insert_node(node* &head,int x){
    node* n = new node(x);
    node* temp = head;
    if(head==NULL){
        head=n;
        return;
    }
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;   
}
void display(node* head){
    while (head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }cout<<"NULL"<<endl; 
}
int length(node* head){
    int l=1;
    while (head->next!=NULL)
    {
        head=head->next;
        l++;
    }
    return l;
}
node* append_k(node* &head,int k){
    int l =length(head);
    cout<<l<<endl;
    int c=1;
      node* newh;
      node* newt;
      node* tail=head;
      while (tail->next!=NULL)
      {
          if(c==l-k){
              newt=tail;
          }
          if(c==l-k+1){
              newh=tail;
          }
         tail=tail->next;
         c++;
      }
      tail->next=head;
      newt->next=NULL;
      return newh;    
}
int main(){
   node* head =NULL;
   insert_node(head,1);
   insert_node(head,2);
   insert_node(head,3);
   insert_node(head,4);
   insert_node(head,5);
   insert_node(head,6);
   display(head);
   display(append_k(head,3));
}