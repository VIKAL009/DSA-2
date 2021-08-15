#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+3;
const int m = 1e9+7;
vector<long long >powers(N);
int p=31;
long long  hash_calc(string s){
    long long  ans=0;
   for(int i=0;i<s.size();i++){
     ans = (ans+(s[i]-'a'+1)*powers[i])%m;
   }
   return ans;
}
int main(){
    powers[0]=1;
    for(int i=1;i<N;i++){
        powers[i]=((powers[i-1]*p))%m;
    }
    vector<string>vec = {"aa","ab","aa","b","cc","aa"};
    vector<long long >hs;
    int cnt=0;
    for(auto w:vec){
         hs.push_back(hash_calc(w));
    }
    sort(hs.begin(),hs.end());
    for(int i=0;i<hs.size();i++){
        if(i==0 or hs[i]!=hs[i-1]){
           cnt++;
        }
    }
    cout<<cnt;

    //brute force::
    // sort(vec.begin(),vec.end());
    // int cnt=0;
    // for(int i=0;i<vec.size();i++){
    //     if(i==0 or vec[i]!=vec[i-1]){
    //        cnt++;
    //     }
    // }
    // cout<<cnt<<endl;
}