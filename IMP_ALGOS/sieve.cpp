#include<bits/stdc++.h>
using namespace std;
void prime_sieve(int n){
    int arr[100]={0};
    for(int i=2;i<=sqrt(n);i++){
        if(arr[i]==0){
            for(int j = i*i;j<=n;j+=i){
                arr[j]=1;
            }
        }
    }
   for(int i=2;i<=n;i++){
       if(arr[i]==0){
           cout<<i<<" ";
       }
   }
}

/*


class Solution {
public:
    int countPrimes(int n) {
        if(n==1 or n==0) return 0;
        vector<int>arr(n+1,0);
        for(int i=2;i*i<=n;i++){
            if(arr[i]==0){
                for(int j=i;j*i<=n;j++){
                    arr[i*j]=1;
                }
            }
        }
        int ans=0;
        for(int i=2;i<n;i++){
            if(arr[i]==0){
                ans++;
            }
        }
        return ans;
    }
};



*/
void spf(int n){
    int arr[100]={0};
    for(int i=2;i<=n;i++){
        arr[i]=i;
    }
    for(int i=2;i<=n;i++){
         if(arr[i]==i){
             for(int j=i*i;j<=n;j+=i){
                 if(arr[j]==j){
                    arr[j]=i;
                 }
             }
         }
    }
    while (n!=1)
    {
        cout<<arr[n]<<" ";
        n=n/arr[n];
    }   
}
int divisible(int n,int a,int b){
    int c1 = n/a;
    int c2 = n/b;
    int c3 = n/(a*b);
    return (c1+c2-c3);
}
int _gcd(int a,int b){
    return (b==0 ? a : _gcd(b,a%b));
}

vector<vector<int>>ans;
void permute(vector<int> a,int k){
    if(k==a.size()){
        ans.push_back(a);
        return;
    }
    for(int i = k;i<a.size();i++){
        swap(a[i],a[k]);
        permute(a,k+1);
        swap(a[i],a[k]);
    }
    return;
}

void helper(vector<int> a,vector<vector<int>> &ans,int k){
      if(k==a.size()){
          ans.push_back(a);
          return;
      }
      for(int i=k;i<a.size();i++){
          if(i != k and a[i]==a[k]){
              continue;
          }
          swap(a[i],a[k]);
          helper(a,ans,k+1);
      }
}
vector<vector<int>> permute_2(vector<int> a){
    sort(a.begin(),a.end());
    vector<vector<int>>ans;
    helper(a,ans,0);
    return ans;
}
int main(){
    // int n;
    // cin>>n;
    // prime_sieve(n);
    // spf(n);

    // Inclusion exclusion :
    // cout<<divisible(40,5,7);

    // Euclid Algorithm
    // cout<<_gcd(24,42);


//****************************************next_permutation
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &i:a)
       cin>>i;

    //    permute(a,0);
    //    for(auto i:ans){
    //    for(auto k:i)
    //    cout<<k<<" ";
    //    cout<<endl;
    //    }
//-----------------------------------------stl------trick---
    sort(a.begin(),a.end());
    do{
        ans.push_back(a);
    }while(next_permutation(a.begin(),a.end()));
       for(auto i:ans){
       for(auto k:i)
       cout<<k<<" ";
       cout<<endl;
       }
//****************************************next_permutation

    // int n;cin>>n;
    // vector<int>a(n);
    // for(auto &i:a){
    //     cin>>i;
    // }
    // vector<vector<int>> res = permute_2(a);
    //     for(auto i:res){
    //    for(auto k:i)
    //    cout<<k<<" ";
    //    cout<<endl;
    // }

}