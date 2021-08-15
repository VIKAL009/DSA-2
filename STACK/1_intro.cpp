#include<bits/stdc++.h>
using namespace std;
// #include<math.h>
// #define n 100
// class Stack{
//     int *arr;
//     int top;
//     public:
//   Stack(){
//       arr = new int [n];
//       top=-1;
//   }
//   void push(int x){
//       if(top==n-1){
//           cout<<"stack overflow"<<endl;
//           return;
//       }
//       arr[++top]=x;
//   }
//   void pop(){
//       if(top==-1){
//           cout<<"no element to pop"<<endl;
//       }
//       top--;
//   }
//   int Top(){
//       if(top==-1){
//           cout<<"no element in stack"<<endl;
//           return -1;
//       }else
//       {
//       return arr[top];
//       }
//   }
//   bool isempty(){
//      return top==-1;
//   }
// };
// int main(){
//    Stack st;
// //    st.push(10);
// //    st.push(20);
// //    st.push(30);
// //    cout<<st.Top()<<endl;
// //    st.pop();
// //    cout<<st.Top()<<endl;
//    cout<<st.isempty();
// }

//****************************************************************reverse a sentence;
// void reverse_sentence(string s){
// stack<string>st;
//     for(int i=0;i<s.length();i++){
//            string p = "";
//         while(s[i]!=' ' and i<s.length())
//         {
//             p.push_back(s[i]);
//             i++;
//         }
//         st.push(p);
//     }
// while (!st.empty())
// {
//     cout<<st.top()<<" ";
//     st.pop();
// }cout<<endl;
// }
// int main(){
// string s = "Hey, how are you doing?";
// // reverse_sentence(s);

// // reverse(s.begin(),s.end());
// // cout<<s;
// }
//************************************************************reverse a stack;
// #include<iostream>
// #include<stack>
// using namespace std;
// void insertATstack(stack<int> &st,int ele){
//     if(st.empty()){
//         st.push(ele);
//         return;                //NOTE:-
//     }
//     int newele = st.top();
//     st.pop();
//     insertATstack(st,ele);

//     st.push(newele);
// }
// void Reverse(stack<int> &st){
//      if(st.empty()){
//          return;
//      }
//      int ele = st.top();
//      st.pop();
//      Reverse(st);

//      insertATstack(st,ele);
// }
// int main(){
//     stack<int>st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     Reverse(st);
//     while (!st.empty())
//     {
//         cout<<st.top()<<" ";
//         st.pop();
//     }cout<<endl;   
// }

//***********************************************infix||prefix||postfix*****************************************************************************************
////////////////infix---->a+b;        prefix(polish)---->+*423-->last se evaluate krenge             postfix(reverse polish)----->42*3+ ---->aage se solve krenge
///precedence
//   () 
//    ^    r-->l
//   * /   l-->r
//  +,-    l--->r
//associativity  


//******************prefix evaluation;
//    - + 7 * 4 5 + 2 0        use stack;
// int prefix_evaluation(string s){

//     stack<int>st;

//     for(int i=s.length()-1;i>=0;i--){
//         if(s[i]>='0' && s[i]<='9'){
//             st.push(s[i]-'0');
//         }else
//         {
//             int op1=st.top();
//             st.pop();
//             int op2=st.top();
//             st.pop();
//             switch (s[i])
//             {
//             case '+':
//                 st.push(op1+op2);
//                 break;
//             case '-':
//                 st.push(op1-op2);
//                 break;
//             case '*':
//                 st.push(op1*op2);
//                 break;
//             case '/':
//                 st.push(op1/op2);
//                 break;
//             case '^':
//                 st.push(pow(op1,op2));
//                 break;
//             default:
//                 break;
//             }
//         }
        
//     }
//     return st.top();
// }

//postfix evalution;

// int postfix_evaluation(string s){

//     stack<int>st;

//     for(int i=0;i<s.length();i++){
//         if(s[i]>='0' && s[i]<='9'){
//             st.push(s[i]-'0');
//         }else
//         {
//             int op2=st.top();
//             st.pop();
//             int op1=st.top();
//             st.pop();
//             switch (s[i])
//             {
//             case '+':
//                 st.push(op1+op2);
//                 break;
//             case '-':
//                 st.push(op1-op2);
//                 break;
//             case '*':
//                 st.push(op1*op2);
//                 break;
//             case '/':
//                 st.push(op1/op2);
//                 break;
//             case '^':
//                 st.push(pow(op1,op2));
//                 break;
//             default:
//                 break;
//             }
//         }
        
//     }
//     return st.top();
// }

//infix to postfix;

// int prec(char c){
//     if(c=='^'){
//         return 3;
//     }
//     if(c=='*' or c=='/'){
//         return 2;
//     }
//     if(c=='+' or c=='-'){
//         return 1;
//     }else{
//         return -1;
//     }
// }
// string infix_to_postfix(string s){
//     stack<char>st;
//     string res;
//     for(int i=0;i<s.length();i++){
//         if((s[i]>='a' and s[i]<='z') || (s[i]>='A' and s[i]<='Z')){
//             res.push_back(s[i]);
//         }else if(s[i]=='('){
//              st.push(s[i]);
//         }else if(s[i]==')'){
//             while (!st.empty() and st.top()!='(')
//             {
//                 res.push_back(st.top());
//                 st.pop();
//             }
//             if(!st.empty()){
//                 st.pop();
//             } 
//         }else
//         {
//             while (!st.empty() and prec(st.top())>prec(s[i]))
//             {
//                 res.push_back(st.top());
//                 st.pop();
//             }
//             st.push(s[i]);
//         }
        
//     }
//     while (!st.empty())
//     {
//         res.push_back(st.top());
//         st.pop();
//     }
//     return res;
// }

//infix to prefix;
//step 1.) reverse the string;

// int prec(char c){
//     if(c=='^'){
//         return 3;
//     }
//     if(c=='*' or c=='/'){
//         return 2;
//     }
//     if(c=='+' or c=='-'){
//         return 1;
//     }else{
//         return -1;
//     }
// }
// string infix_to_prefix(string s){
//     reverse(s.begin(),s.end());
//     stack<char>st;
//     string res;
//     for(int i=0;i<s.length();i++){
//         if((s[i]>='a' and s[i]<='z') || (s[i]>='A' and s[i]<='Z')){
//             res.push_back(s[i]);
//         }else if(s[i]==')'){                                 //(---->)
//              st.push(s[i]);                                 
//         }else if(s[i]=='('){                                 //)--->(
//             while (!st.empty() and st.top()!=')')            //(---->)
//             {
//                 res.push_back(st.top());
//                 st.pop();
//             }
//             if(!st.empty()){
//                 st.pop();
//             } 
//         }else
//         {
//             while (!st.empty() and prec(st.top())>prec(s[i]))
//             {
//                 res.push_back(st.top());
//                 st.pop();
//             }
//             st.push(s[i]);
//         }
        
//     }
//     while (!st.empty())
//     {
//         res.push_back(st.top());
//         st.pop();
//     }
//     reverse(res.begin(),res.end());
//     return res;
// }




//balance paranthesis;

bool check_p(string s){
    int a = s.length();
    stack<char>st;
    bool ans = true;
    for(int i=0;i<a;i++){
        if(s[i]=='[' or s[i]=='{' or s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==']'){
            if(!st.empty() and st.top()=='['){
               st.pop();   
            }else
            {
              ans = false;
              break;  
            }   
        }
        else if(s[i]=='}'){
            if(!st.empty() and st.top()=='{'){
               st.pop();   
            }else
            {
              ans = false;
              break;  
            }   
        }
        else if(s[i]==')'){
            if(!st.empty() and st.top()=='('){
               st.pop();   
            }else
            {
              ans = false;
              break;  
            }   
        }
    }
    if(!st.empty()){
        return false;
    }else
    {
        return ans;
    }
    
}
int main(){

    // cout<<prefix_evaluation("-+7*45+20");
    // cout<<postfix_evaluation("46+2/5*7+");

    // cout<<infix_to_postfix("(a-b/c)*(a/k-l)");
    // cout<<infix_to_prefix("(a-b/c)*(a/k-l)");

    // string s="[{()}]";
    // if(check_p(s)){
    //     cout<<"balance hai";
    // }else{
    //     cout<<"balance nhi hai";
    // }

}

