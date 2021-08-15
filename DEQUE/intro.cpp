#include<iostream>
#include<bits/stdc++.h>
#include<deque>
#include<queue>
#include<vector>
using namespace std;

// int main(){
//     deque<int>dq;
//     dq.push_front(1);
//     dq.push_front(2);
//     dq.push_back(3);
//     dq.push_back(4);
//     for(auto i:dq){
//         cout<<i<<" ";
//     }cout<<endl;
//     cout<<dq.size()<<endl;
//     dq.pop_back();
//     dq.pop_front();
//     for(auto i:dq){
//         cout<<i<<" ";
//     }cout<<endl;
//     cout<<dq.size()<<endl;
// }

//sliding window maximum;


int main(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(auto &i:a){
        cin>>i;
    }
    multiset<int,greater<int>>s;
    vector<int>ans;
    for(int i=0;i<k;i++){
        s.insert(a[i]);
    }
    ans.push_back(*s.begin());
    for(int i=k;i<n;i++){
        s.erase(s.lower_bound(a[i-k]));
    }
    for(auto i:ans){
        cout<<i;
    }
}