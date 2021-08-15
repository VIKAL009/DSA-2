#include<bits/stdc++.h>
using namespace std;


// int main(){

//     // int a=10;
//     // int *aptr;
//     // aptr = &a;
//     // cout<<a<<" "<<aptr<<" "<<&a<<" "<<*aptr;
//     // *aptr=50;
//     // cout<<"\n"<<a;


//     //pointer arithmetic  ++   --   +   - ;
//     // aptr++;
//     // cout<<"\n"<<aptr;
//     // aptr =100-->104


//     //pointers and arrays;
//     int arr[]={1,2,3};
//     // cout<<"\n"<<*arr;
//     // int *p=arr;
//     // p++;
//     // cout<<endl<<*p;
//     // p++;
//     // cout<<endl<<*p;
//     // for(int i=0;i<3;i++){
//     //     cout<<*(arr+i)<<" ";      
//     //     //arr++  illegal; 
//     // }


//     // pointer to pointer
//     int a=10;
//     int*p=&a;
//     int**q=&p;
//     // cout<<*p<<" "<<**q;
//     cout<<p<<" "<<*q;


// }

/////////////////////////////////////////////Stack vs Heap/////////////////////////////////////////////////////////////

// int main(){
//     //stack   size fix
//     //heap    size not fix
//     int a=10;             //stored in stack;
//     int *p = new int;             //allocate memory in heap
//     *p = 10;
//     delete p;                           //deallocate memory

//     p = new int[4];
//     delete[]p;
//     p=NULL;
// }