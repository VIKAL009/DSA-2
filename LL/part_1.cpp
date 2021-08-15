#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};


// void Delete_front(node* &head){
//     node* temp = head;
//     head=head->next;
//     delete temp;
// }
// void DeleteNode(node* &head,int val){
//     if(head==NULL){
//         return;
//     }
//     if(head->next==NULL){
//         Delete_front(head);
//         return;
//     }
//     node* temp = head;
//     while (temp->next->data!=val)
//     {
//         temp=temp->next;
//     }
//     node * t = temp->next;
//     temp->next=temp->next->next;
//     delete t;
// }
// bool serach(node* head,int key){
//     while (head!=NULL)
//     {
//         if(head->data==key){
//             return true;
//         }
//         head=head->next;
//     }
//     return false;  
// }
// void insertAtbeg(node* &head,int val){
//      node* t = new node(val);
//      t->next=head;
//      head=t;
// }
void insertAtend(node* &head,int val){
    node* temp = new node(val);
    node* t=head;
    if(head==NULL){
        head=temp;
        return;
    }
    while (t->next!=NULL)
    {
        t=t->next;
    }
    t->next=temp;
}
void display(node* head){
    while (head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }cout<<"NULL"<<endl;   
}
// node* Reverse_L(node* head){
//     node* prev = NULL;
//     node* curr = head;
//     node* nextptr;
//     while (curr!=NULL)
//     {
//         nextptr=curr->next;
//         curr->next=prev;

//         prev=curr;
//         curr=nextptr;
//     }
//     return prev;   
// }
// node* Reverse_recursive(node* head){
//     if(head==NULL or head->next==NULL){
//         return head;
//     }
//     node* newhead = Reverse_recursive(head->next);
//     head->next->next = head;
//     head->next=NULL;
//     return newhead;
// }
// node* reverse_k(node* head,int k){
//     node* prev = NULL;
//     node* curr = head;
//     node* nextptr;

//     int _count=0;
//     while (curr!=NULL and _count<2)
//     {
//         nextptr=curr->next;
//         curr->next=prev;

//         prev=curr;
//         curr=nextptr;
//         _count++;
//     }
//     if(nextptr!=NULL){
//         head->next = reverse_k(nextptr,k);
//     }
//     return prev;
// }
// void make_cycle(node* &head,int pos ){
//         node* temp = head;
//         node* StartNode;
//         int _count=1;
//         while (temp->next!=NULL)
//         {
//             if(_count==pos){
//                 StartNode=temp;
//             }
//             temp = temp->next;
//             _count++;
//         }
//         temp->next=StartNode;       
// }
// bool detect_cycle(node* head){
//     node* slow=head;
//     node* fast=head;
//     while (fast!=NULL and fast->next!=NULL)
//     {
//         slow = slow->next;
//         fast = fast->next->next;
//         if(fast==slow){
//             return true;
//         }
//     }
//     return false;
// }
// void remove_cycle(node* &head){
//     node* slow=head;
//     node* fast=head;
//     do
//     {
//         slow=slow->next;
//         fast=fast->next->next;
//     } while (slow!=fast);
//     fast = head;
//     while (fast->next!=slow->next)
//     {
//         fast=fast->next;
//         slow=slow->next;
//     }
//     slow->next=NULL; 
// }
int main(){

  node* head=NULL;
  insertAtend(head,1);
  insertAtend(head,2);
  insertAtend(head,3);
  insertAtend(head,4);
  insertAtend(head,5);
  insertAtend(head,6);

//   insertAtbeg(head,5);
//   insertAtbeg(head,6);
//   display(head);
//   cout<<serach(head,10);
//   DeleteNode(head,3);
//   DeleteNode(head,5);
//   Delete_front(head);
//   Delete_front(head);
//   Delete_front(head);
//   DeleteNode(head,3);

//**********floyds algorithm*****************
//   display(head);
//   make_cycle(head,2);
//   cout<<detect_cycle(head)<<endl;
//   remove_cycle(head);
//   cout<<detect_cycle(head)<<endl;
//   display(head);

//   display(Reverse_L(head));
//   display(Reverse_recursive(head));
//   display(reverse_k(head,2));
//*******************************************

 return 0;   
 
}