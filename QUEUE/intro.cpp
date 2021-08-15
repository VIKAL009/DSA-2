//*****************************QUEUE******FIFO************************
#include<iostream>
#include<bits/stdc++.h>
#define n 5
using namespace std;

/////array implementation;

// class Queue{
// private:
// int * arr;
// int front,back;
// public:
// Queue(){
//     arr = new int [n];
//     front = back = -1;
// }
//   void push(int x){
//      if(back == n-1){
//          cout<<"Queue is overflow"<<endl;
//          return;
//      }
//      arr[++back]=x;
//      if(front==-1){
//          front++;
//      }
//   }
//   void pop(){
//       if(front==-1 or front>back){
//           cout<<"No elements in queue"<<endl;
//           return;
//       }
//       front++;
//   }
//   int peek(){
//       if(front==-1 or front>back){
//           cout<<"No elements in queue"<<endl;
//           return -1;
//       }
//       return arr[front];
//   }
//   bool empty(){
//       if(front==-1 or front>back){
//           return true;
//       }else
//       {
//           return false;
//       }
      
//   }
// };
// int main(){
//    Queue Q;
// //    cout<<Q.empty()<<endl;
//    Q.pop();
//    Q.push(1);
//    Q.push(2);
//    Q.push(3);
//    Q.push(4);
//    Q.push(5);
// //    cout<<Q.empty()<<endl;
// //    Q.push(5);
//    cout<<Q.peek()<<endl;
//    Q.pop();
//    cout<<Q.peek()<<endl;
//    Q.pop();
// }

//


/////LL implementation;

// class node{
//     public:
//     int data;
//     node* next;
//     node(int val){
//         data = val;
//         next = NULL;
//     }
// };
// class Queue{
//     node* front;
//     node* back;
//     public:
//     Queue(){
//         front=back=NULL;
//     }
//     void push(int x){
//         node* m = new node(x);
//         if(front==NULL and back ==NULL){
//             front=back=m;
//         }
//         else
//         {
//             back->next=m;
//             back=m;
//         }  
//     }
//     void pop(){
//         if(front==NULL){
//             cout<<"Queue is empty"<<endl;
//         }
//         else
//         {
//             node* temp=front;
//             front=front->next;
//                 delete temp;
//         }   
//     }
//     int peek(){
//         if(front==NULL){
//             cout<<"Queue is empty"<<endl;
//             return -1;
//         }else
//         {
//             return front->data;
//         }
        
//     }
//     bool empty(){
//         if(front==NULL){
//             return true;
//         }else
//         {
//             return false;
//         }
        
//     }
// };
// int main(){
//     Queue Q;
//     cout<<Q.empty()<<endl;
//     cout<<Q.peek()<<endl;
//     // Q.push(1);
//     // Q.push(2);
//     // Q.push(3);
//     // Q.push(4);
//     // cout<<Q.empty()<<endl;
//     // cout<<Q.peek()<<endl;
//     // Q.pop();
//     // cout<<Q.peek()<<endl;
//     // Q.pop();
//     // cout<<Q.peek()<<endl;
//     // Q.pop();
//     // cout<<Q.peek()<<endl;
//     // Q.pop();
//     // cout<<Q.empty()<<endl;
//     // Q.pop();
// }


//using two stacks;

// class que{
//     stack<int>s1,s2;
//     public:
//     void push(int x){
//         s1.push(x);
//     }
//     int pop(){
//         if(s1.empty() and s2.empty()){
//             cout<<"stack is empty"<<endl;
//             return -1;
//         }
//         if(s2.empty()){
//             while (!s1.empty())
//             {
//                 s2.push(s1.top());
//                 s1.pop();
//             } 
//         }
//         int k = s2.top();
//         s2.pop();
//         return k;
//     }
//     bool empty(){
//         if(s1.empty() and s2.empty()){
//             return true;
//         }else
//         {
//             return false;
//         }
        
//     }
// };
// int main(){
//     que q;
//     // cout<<q.empty()<<endl;
//     // cout<<q.pop()<<endl;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(5);
//     // cout<<q.empty()<<endl;
//     cout<<q.pop()<<endl;
//     cout<<q.pop()<<endl;
//     cout<<q.pop()<<endl;
//     cout<<q.pop()<<endl;
//     cout<<q.pop()<<endl;
// }

//using one stack;

// class que{
//     stack<int>s1;
//     public:
//     void push(int x){
//         s1.push(x);
//     }
//     int pop(){
//         if(s1.empty()){
//             cout<<"stack is empty"<<endl;
//             return -1;
//         }
//         int k = s1.top();
//         s1.pop();
//         if(s1.empty()){
//             return k;
//         }

//         int item = pop();
//         s1.push(k);
//         return item;
//     }
//     bool empty(){
//         if(s1.empty()){
//             return true;
//         }else
//         {
//             return false;
//         }
        
//     }
// };
// int main(){
//     que q;
//     // cout<<q.empty()<<endl;
//     // cout<<q.pop()<<endl;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(5);
//     // cout<<q.empty()<<endl;
//     cout<<q.pop()<<endl;
//     cout<<q.pop()<<endl;
//     cout<<q.pop()<<endl;
//     cout<<q.pop()<<endl;
//     cout<<q.pop()<<endl;
// }


//1.)stack using queue;


// class Stack{
//    queue<int>q1;
//    queue<int>q2;
//    int N;
//    public:
//    Stack(){
//        N=0;
//    }
//    void push(int x){
//      q2.push(x);
//      N++;
//    while (!q1.empty())
//    {
//        q2.push(q1.front());
//        q1.pop();
//    }
//    queue<int>temp=q1;
//    q1=q2;
//    q2=temp;
//    }
//    int pop(){
//        if(q1.empty()){
//            cout<<"Queue is empty"<<endl;
//            return -1;
//        }
//        int k = q1.front();
//        q1.pop();
//        N--;
//        return k;
//    }
//    bool empty(){
//        if(q1.empty()){
//            return true;
//        }else
//        {
//            return false;
//        }
       
//    }
//    int size(){
//        return N;
//    }  
// };
// int main(){
//    Stack st;
//    cout<<st.empty()<<endl;
//    st.push(1);
//    st.push(2);
//    st.push(3);
//    st.push(4);
//    cout<<st.pop()<<endl;
//    cout<<st.pop()<<endl;
//    cout<<st.pop()<<endl;
//    cout<<st.pop()<<endl;
//    cout<<st.empty()<<endl;
//    cout<<st.pop()<<endl;
//    cout<<st.size()<<endl;
// }

//2.)

// class Stack{
//    queue<int>q1,q2;
//    int  N;
//    public:
//    Stack(){
//        N=0;
//    }
//    void push(int x){
//        q1.push(x);
//        N++;
//    }
//    int pop(){
//        if(N==0){
//            cout<<"Stack is empty"<<endl;
//            return -1;
//        }
//        int l=N;
//        while (l!=1)    //q1.size()!=1;
//        {
//            q2.push(q1.front());
//            q1.pop();
//            l--;
//        }
//        int k = q1.front();
//        q1.pop();
//        queue<int>temp = q1;
//        q1=q2;
//        q2=temp;
//        N--;
//        return k;
//    }
//    int size(){
//        return N;
//    }
//    bool empty(){
//        if(N==0){
//            return true;
//        }else
//        {
//            return false;
//        }
       
//    }
// };
// int main(){
//      Stack st;
//      cout<<st.empty()<<endl;
//      cout<<st.size()<<endl;
//      st.push(1);
//      st.push(2);
//      st.push(3);
//      st.push(4);
//      st.push(5);
//      cout<<st.empty()<<endl;
//      cout<<st.size()<<endl;

//      cout<<st.pop()<<endl;
//      cout<<st.pop()<<endl;
//      cout<<st.pop()<<endl;
//      cout<<st.pop()<<endl;
//      cout<<st.pop()<<endl;
//      cout<<st.empty()<<endl;
//      cout<<st.size()<<endl;
//      cout<<st.pop()<<endl;
// }

