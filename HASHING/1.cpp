#include<bits/stdc++.h>
using namespace std;
//load factor = (no. of ele)/(no of keys):
//collision   = 1. separate chaning    2.open addressing--probbing(depend on key -1.linear 2.quad 3.Duoble hashing):

//STL
//                Maps                                  Unordered Maps
// INSERTION     O(logn)                                       o(1)
//ACCESSinG      o(logn)                                       o(1)
//DELETION       o(logn)                                       o(n)
//IMPLEMENT     RED-BLACK                                    HASH-TABLE    
//***************************************************************************
// int main(){
//    map<int,int>mp;
//    unordered_map<int,int>mp1;
//    mp[8]=2;cout<<mp[8];
// }
//***************************************************************************
//count frequency:
// int main(){
//     int arr[]={2,2,2,1,1,4,3,4};
//     // unordered_map<int,int>freq;
//     map<int,int>freq;
//     for(int i=0;i<8;i++){
//         freq[arr[i]]++;
//     }
//     unordered_map<int,int>::iterator it;
//     for(auto i:freq){
//         cout<<i.first<<" : "<<i.second<<endl;
//     }
// }
//****************************************************************************
//print vertical order of a binary tree:
// class node{
//     public:
//    int key;
//    node* left,*right;

// };
// node* newnode(int x){
//     node* n = new node;
//     n->key=x;
//     n->left=n->right=NULL;
//     return n;
// }
// void get_vorder(node* root,int dis,map<int,vector<int>>&mp){
//     if(root==NULL){
//         return;
//     }
//     mp[dis].push_back(root->key);
//     get_vorder(root->left,dis-1,mp);
//     get_vorder(root->right,dis+1,mp);
// }
// int main(){
//     int arr[]={10,7,4,3,11,14,6};
//     //parent   : i
//     //left-son : 2*i+1
//     //right-son: 2*i+2
//     map<int,vector<int>>mp;
//     int dis=0;
//     node* root=newnode(10);
//     root->left=newnode(7);
//     root->right=newnode(4);
//     root->left->left=newnode(3);
//     root->left->right=newnode(11);
//     root->right->left=newnode(14);
//     root->right->right=newnode(6);
//     get_vorder(root,dis,mp);
//     for(auto i:mp){
//         cout<<i.first<<" --> ";
//         for(auto j:i.second){
//             cout<<j<<" ";
//         }cout<<endl;
//     }
// }
//***********************************************************************************
//number of subarrays with 0 sum:
// int main(){
//     int arr[]={1,-1,1,-1};
//     map<int,int>mp;
//     int sum=0;
//     for(int i=0;i<4;i++){
//         sum+=arr[i];
//         mp[sum]++;
//     }
//     int ans=0;
//     for(auto i:mp){
//         int c=i.second;
//         ans+=((c*(c-1))/2);
//         if(i.first==0){
//             ans+=i.second;
//         }
//     }
//     cout<<ans;
// }
//*************************************************************************************
//sliding window technique:
// int main(){
//     int arr[]={-2,10,1,3,2,-1,4,5};
//     int n=8;
//     int k=3;
//     int i=0,j=0;
//     int sum=0;
//     int mn=INT_MAX;
//     while(j<n){
//        sum+=arr[j];
//        if(j-i+1<k){
//            j++;
//        }else if(j-i+1==k){
//           mn=min(mn,sum);
//           cout<<sum<<" ";
//           sum-=arr[i];
//           i++;
//           j++;
//        }
//     }
//     cout<<endl<<mn;
// }
//***************************************************************************************
//sudoku solver:
void helper(int r, int c, vector<vector<char>>&a, map<pair<int,int>,map<int,int>>&mp, vector<map<int,int>>&row, vector<map<int,int>>&col){
            if(r==9){
                for(auto k:a){
                    for(auto p:k){
                        cout<<p<<" ";
                    }cout<<endl;
                }cout<<endl;
                 return;
            }
            if(c==9){
                helper(r+1,0,a,mp,row,col);
                return;
            }
            if(a[r][c]!='.'){
                //empty nahi hai
                helper(r,c+1,a,mp,row,col);
                return;
            }
            for(int i=1;i<=9;i++){
                int rr=r/3;
                int cc=c/3;
                if(!mp[{rr,cc}][i] and !row[r][i] and !col[c][i]){
                    mp[{rr,cc}][i]=1;
                    row[r][i]=1;
                    col[c][i]=1;
                    a[r][c]=i+'0';
                    helper(r,c+1,a,mp,row,col);
                    mp[{rr,cc}][i]=0;
                    row[r][i]=0;
                    col[c][i]=0;
                    a[r][c]='.';
                }
            }
}
void solve(vector<vector<char>>&a){
        map<pair<int,int>,map<int,int>>mp;
        vector<map<int,int>>row(9);
        vector<map<int,int>>col(9);
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(a[i][j] != '.'){
                    mp[{i/3,j/3}][a[i][j]-'0']=1;
                    row[i][a[i][j]-'0']=1;
                    col[j][a[i][j]-'0']=1;
                }
            }
        }
        helper(0,0,a,mp,row,col);
}
int main(){
    vector<vector<char>>vec={
           {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
           {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
           {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
           {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
           {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
           {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
           {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
           {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
           {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };
    solve(vec);
}
/*

5 3 4 6 7 8 9 1 2 
6 7 2 1 9 5 3 4 8 
1 9 8 3 4 2 5 6 7 
8 5 9 7 6 1 4 2 3 
4 2 6 8 5 3 7 9 1 
7 1 3 9 2 4 8 5 6
9 6 1 5 3 7 2 8 4
2 8 7 4 1 9 6 3 5
3 4 5 2 8 6 1 7 9 

*/