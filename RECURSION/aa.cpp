#include<bits/stdc++.h>
using namespace std; 
int Solution::colorful(int A) {
    set<int>st;
    int _c=0;
    string s=to_string(A);
   for(int i=0;i<s.size();i++){
       for(int j=i;j<s.size();j++){
           int p=1;
           for(int k=i;k<=j;k++){
               p*=(s[k]-'0');
           }
           _c++;
           st.insert(p);
       }
   }
   if(_c==st.size()){
       return 1;
   }else{
       return 0;
   }
}
int main(){

    
}