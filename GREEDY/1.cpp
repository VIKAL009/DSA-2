#include<bits/stdc++.h>
using namespace std;
//generally sorting is done before applying greedy techiques:


//1.indian coin change problem:
// int main(){
//   int arr[]={1,2,5,10,20,50,100,200,500,2000};
//   sort(arr,arr+10,greater<int>());
//   int ans=0;
// //   int x=350;
// //   int x=500;
//   int x=388;
//   for(int i=0;i<10;i++){
//       ans+=x/arr[i];
//       x-=x/arr[i]*arr[i];
//   }
//   cout<<ans;
// }

//2.activity selection problem:
// int main(){
//     int n;cin>>n;
//      vector<vector<int>>vec;
//      for(int i=0;i<n;i++){
//          int start,end;
//          cin>>start>>end;
//          vec.push_back({start,end});
//      }
//      sort(vec.begin(),vec.end(),[&](vector<int>&a,vector<int>&b){
//          return a[1] < b[1];
//      });
//      int take=1;
//      int end=vec[0][1];
//      for(int i=1;i<n;i++){
//          if(vec[i][0] >= end){
//              take++;
//              end=vec[i][1];
//          }
//      }                         //second ka start time first ke end se jada hona chahiye::
//      cout<<take;
// // 3
// // 10 20
// // 12 15
// // 20 30
// // ans =2:
// }

//3.Fractional knapsck:
// bool comp(pair<int,int> p1,pair<int,int>p2){
//     double a=(double)p1.first/p1.second;
//     double b=(double)p2.first/p2.second;
//     return a>b;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<pair<int,int>>vec(n);
//     for(int i=0;i<n;i++){
//         cin>>vec[i].first>>vec[i].second;
//     }
//     int w;cin>>w;
//     sort(vec.begin(),vec.end(),comp);
//     int ans=0;
//     for(int i=0;i<n;i++){
//         if(w>vec[i].second){
//             ans+=vec[i].first;
//             w-=vec[i].second;
//             continue;
//         }
//         ans+=(double)vec[i].first/vec[i].second*w;
//         // double vw=(double)vec[i].first/vec[i].second;
//         // ans+=vw*w;
//         break;
//     }
//     cout<<ans;

// // 5
// // 21 7
// // 24 4
// // 12 6
// // 40 5
// // 30 6
// // 20
// // 109
// }

//4.optimal merge pattern :
// int main(){
//     int n;cin>>n;
//     vector<int>vec(n);
//     for(int i=0;i<n;i++){
//         cin>>vec[i];
//     }
//     priority_queue<int,vector<int>,greater<int> >minheap;
//     for(int i=0;i<vec.size();i++){
//         minheap.push(vec[i]);
//     }
//     int ans=0;
//     while (minheap.size()>1)
//     {
//         int e1=minheap.top();
//         minheap.pop();
//         int e2= minheap.top();
//         minheap.pop();
//         ans+=e1+e2;
//         minheap.push(e1+e2);
//     }
//     cout<<ans;
// // 4
// // 2 4 5 7
// // 35
// }

//5.expedi:
// int main(){
//     int t;cin>>t;
//     while(t--){
//          int n;cin>>n;
         
//          vector<pair<int,int>>vec(n);
//          for(int i=0;i<n;i++){
//              cin>>vec[i].first>>vec[i].second;
//          }
//          int l,p;cin>>l>>p;

//          for(int i=0;i<n;i++){
//              vec[i].first=l-vec[i].first;
//          }
//          sort(vec.begin(),vec.end());

//          int ans=0;
//          int curr=p;

//          priority_queue<int,vector<int>>pq;
//          bool f=0;
//          for(int i=0;i<n;i++){
//             if(curr>l){
//                 break;
//             }

//             while (curr<vec[i].first)
//             {
//                 if(pq.empty()){
//                   f=1;
//                   break;
//                 }
//                 ans++;
//                 curr+=pq.top();
//                 pq.pop();
//             }
//             if(f){
//                 break;
//             }
//             pq.push(vec[i].second);
//          }
//          if(f){
//              cout<<"-1"<<endl;
//              continue;
//          }
//          while (!pq.empty() and curr <l){
//              curr+=pq.top();
//              pq.pop();
//              ans++;
//          }
//          if(curr<l){
//              cout<<"-1"<<endl;
//              continue;
//          }
//          cout<<ans<<endl;;
         
//     }
//     return 0;

// // 1
// // 4
// // 4 4
// // 5 2
// // 11 5
// // 15 10
// // 25 10
// // 2
// }

//6.max and Min diff.
// int main(){
//     int n;cin>>n;
//     vector<int>vec(n);
//     for(int i=0;i<n;i++){
//         cin>>vec[i];
//     }
//     sort(vec.begin(),vec.end());
//     long long int mn=0,mx=0;
//     for(int i=0;i<n/2;i++){
//         mx+=(vec[i+n/2]-vec[i]);
//         mn+=(vec[2*i+1]-vec[2*i]);
//     }
//     cout<<mn<<" "<<mx;

//     return 0;

// // 4
// // 12 -3 10 0
// // 5 25
// }
//***********************************************************************************








