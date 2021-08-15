#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//divide and conqure;

//merge sort;                 T:- n(logn);

// void merge(int arr[],int l,int mid,int r){

//     int n1 = mid-l+1;
//     int n2 = r-mid;

//     int a[n1];
//     int b[n2];

//     for(int i=0;i<n1;i++){
//         a[i]=arr[l+i];
//     }
//     for(int i=0;i<n2;i++){
//         b[i]=arr[mid+1+i];
//     }

//     int i=0;
//     int j=0;
//     int k=l;
// while (i<n1 and j<n2)
// {
//     if(a[i]<b[j]){
//         arr[k]=a[i];
//         i++;
//         k++;
//     }else
//     {
//         arr[k]=b[j];
//         k++;
//         j++;
//     }
// }
// while(i<n1){
//     arr[k]=a[i];
//     i++;
//     k++;
// }
// while (j<n2)
// {
//     arr[k]=arr[j];
//     j++;
//     k++;
// }
// }
// void merge_sort(int arr[],int l,int r){
//     if(l<r){
//         int mid = (l+r)/2;
//         merge_sort(arr,l,mid);
//         merge_sort(arr,mid+1,r);

//         merge(arr,l,mid,r);
//     }
// }
// int main(){
//      int arr[]={5,4,3,2,1};
//      merge_sort(arr,0,4);
//     //  for(int i=0;i<5;i++){
//     //      cout<<arr[i]<<" ";
//     //  }
//     for(auto i:arr){
//         cout<<i<<" ";
//     }
// }

//quick sort;    T:-(nlogn)-->best case;   worst case 0(n2);

// int partition(int arr[],int start,int end){
//     int pivot = arr[end];
//     int pi = start;
//     for(int i = start;i<end;i++){
//         if(arr[i]<=pivot){
//             swap(arr[i],arr[pi]);
//             pi++;
//         }
//     }
//     swap(arr[pi],arr[end]);
//     return pi;
// }

// void Quicksort(int arr[],int start,int end){
//     if(start<end){
//       int pi = partition(arr,start,end);
//        Quicksort(arr,start,pi-1);
//        Quicksort(arr,pi+1,end);
//     }
// }

// int main(){
//     int arr[]={6,5,4,3,2,1};
//     Quicksort(arr,0,5);
//     for(auto i:arr){
//         cout<<i<<" ";
//     }
// }

// count sort;    T:-max(Ai,n);

// void _count_sort(int arr[],int n){
//       int a = arr[0];
//       for(int i = 0;i<n;i++){
//           a = max(a,arr[i]);
//       }

//       int app[10]={0};
//       for(int i=0;i<n;i++){
//           app[arr[i]]++;
//       }
//       for(int i=1;i<=a;i++){
//           app[i]+=app[i-1];
//       }
//       int output[n];
//       for(int i=n-1;i>=0;i--){
//           output[--app[arr[i]]]=arr[i];
//       }
//       for(int i=0;i<n;i++){
//           arr[i]=output[i];
//       }
// }
// int main(){
//     int arr[]={6,5,4,4,3,2,2,1};
//     _count_sort(arr,8);
//     for(auto i:arr){
//         cout<<i<<" ";
//     }
// }

//dnf sort;  Time:-o(n);

void dnf(int arr[],int n){
    int low=0;
    int mid=0;
    int high=n-1;
    while (mid<=high)
    {
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }

}
int main(){
    // int arr[]={1,0,2,1,0,1,2,1,2};
    int arr[]={2,0,2,1,1,0};

    dnf(arr,6);

    for(auto i:arr){
        cout<<i<<" ";
    }
}

//wave sort;  T:- O(n);

// void wave_sort(int arr[],int n){
//      for(int i=1;i<n-1;i+=2){
//          if(arr[i]>arr[i-1]){
//              swap(arr[i],arr[i-1]);
//          }
//          if(arr[i]>arr[i+1] and i<=n-2){
//              swap(arr[i],arr[i+1]);
//          }
//      }
// }
// int main(){
//     int arr[]={1,3,4,7,5,6,2};
//     wave_sort(arr,7);
//     for(auto i:arr){
//         cout<<i<<" ";
//     }
// }

//inversion count;
// long long _merge(int arr[],int l,int mid,int r){
//         long long inv=0;
//         int n1=mid-l+1;
//         int n2=r-mid;

//         int a[n1];
//         int b[n2];
//         for(int i=0;i<n1;i++){
//             a[i]=arr[l+i];
//         }
//         for(int i=0;i<n2;i++){
//             b[i]=arr[mid+i+1];
//         }
//         int i=0,j=0,k=l;
//         while (i<n1 and j<n2)
//         {
//             if(a[i]<=b[j]){
//                arr[k]=a[i];
//                i++;
//                k++;
//             }else
//             {
//                 arr[k]=b[j];
//                 inv +=n1-i;
//                 j++;
//                 k++;
//             }
//         }
//         while (i<n1)
//         {
//             arr[k]=a[i];
//             i++;
//             k++;
//         }
//         while (j<n2)
//         {
//             arr[k]=b[j];
//             j++;
//             k++;
//         }
//     return inv;  
// }
// long long _inversion_count(int arr[],int l,int r){
//     long long inv=0;
//      if(l<r){
//          int mid = (l+r)/2;
//          inv+=_inversion_count(arr,l,mid);
//          inv+=_inversion_count(arr,mid+1,r);

//          inv+=_merge(arr,l,mid,r);
//      }
//      return inv;
// }


// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     // for(auto &i:arr){
//     //     cin>>i;
//     // }

//     cout<<_inversion_count(arr,0,n-1);
// }
