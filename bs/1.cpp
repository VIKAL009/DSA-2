#include<bits/stdc++.h>
using namespace std;


// bool isfisible(int arr[],int n,int mid,int k)
// {
//    int pos=arr[0];
//    int c=1;
//    for(int i=1;i<n;i++){
//        if(arr[i]-pos >= mid)
//        {
//            pos=arr[i];
//            c++;
//            if(c==k){
//                return true;
//            }
//        }
//    }
//    return false;
// }
// int LMD(int *arr,int n,int k)
// {
//     sort(arr,arr+n);
//     int start=arr[0];
//     int end = arr[n-1];
//     int res=-1;
//     while(start < end)
//     {
//     int mid = (start+end)/2;
//     if(isfisible(arr,n,mid,k)){
//            res=max(res,mid);
//            start=mid+1;
//     }else
//     {
//         end=mid;
//     }
//     }
//     return res;
// }
// int main(){
//     int arr[]={1,2,8,4,9};
//     int n=5;
//     int k=3;
//     cout<<"Largesr min dist is : "<<LMD(arr,n,k)<<endl;


//     return 0;
// }

// bool isfisible(int arr[],int mid,int n,int m)
// {

//     int student=1;
//     int sum=0;
//     for(int i=0;i<n;i++)
//     {
//     if(arr[i] > mid)
//     {
//         return false;
//     }
//        if(sum+arr[i] > mid){
//            student++;
//            sum=0;
//        }
//        if(student > m)
//        {
//            return false;
//        }
//        sum+=arr[i];
//     }
//     return true;
// }
// int allocate(int arr[],int n,int m)
// {
//     if(m>n)
//     {
//         return -1;
//     }
//     int sum=0;
//     for(int i=0;i<n;i++)
//     {
//         sum=sum+arr[i];
//     }
//     int end = sum;
//     int start=0;
//     int ans = INT_MAX;
//     while (start <= end)
//     {
//         int mid = (start+end)/2;
//         if(isfisible(arr,mid,n,m))
//         {
//            ans = min(ans,mid);
//            end=mid-1;
//         }else
//         {
//            start=mid+1;
//         }
        
//     }
//     // cout<<start;
//     return ans;
// }
// int main()
// {
//     // int arr[]={12,34,67,90};
//     // int n = 4;
//     // int m = 2;

//     //painters partition::
//     int arr[]={10,20,30,40};
//     int n = 4;
//     int m = 2;

//     cout<<"the min no. of pages :"<<allocate(arr,n,m)<<endl;

//     return 0;
// }


// int searchInRotatedArray(int arr[],int key,int low,int high)
// {
//     if(high < low)
//     {
//         return -1;
//     }
//    int mid = (low+high)/2;
//    if(key==arr[mid]){
//        return mid;
//    }
//    if(arr[low]<arr[mid])
//    {
//      if(key > arr[low] and key < arr[mid])
//      {
//        return searchInRotatedArray(arr,key,low,mid-1);
//      }
//      else
//      {
//        return searchInRotatedArray(arr,key,mid+1,high);
//      }
     
//    }
//    if(key > arr[mid] and key < arr[high])
//    {
//        return searchInRotatedArray(arr,key,mid+1,high);
//    }
//        return searchInRotatedArray(arr,key,low,mid-1);
   
// }
// int main()
// {
//     int arr[] = {6,7,8,9,10,1,2,5};
//     int n=8;
//     int key=8;
//     int idx = searchInRotatedArray(arr,key,0,n-1);

//     if(idx==-1)
//     {
//         cout<<"Key doesn'nt exist:";
//     }else
//     {
//         cout<<"key is present at idx: "<<idx<<endl;
//     }
    

//     return 0;
// }

// int find_peak(int arr[],int low ,int high ,int n )
// {
    
//    int mid = (low + high )/2;
//    if((mid==0 or arr[mid-1] < arr[mid]) and (mid==n-1 or arr[mid+1] < arr[mid]))
//    {
//          return mid;
//    }
//    if(arr[mid-1] > arr[mid])
//    {
//        return find_peak(arr,low,mid-1,n);
//    }else
//    {
//        return find_peak(arr,mid+1,high,n);
//    }
// }

// int find_peak(int arr[],int low ,int high ,int n )
// {
//     while (low <= high)
//     {
//    int mid = (low + high )/2;
//    if((mid==0 or arr[mid-1] < arr[mid]) and (mid==n-1 or arr[mid+1] < arr[mid]))
//    {
//          return mid;
//    }
//    if(arr[mid-1] > arr[mid])
//    {
//        high = mid-1;
//    }else
//    {
//        low = mid+1;
//    }
//     }
//    return -1; 
// }

// int main()
// {
//     int arr[]={0,6,8,5,7,9};
//     int n=6;
//     cout<<"peak element index : "<< find_peak(arr,0,n-1,n);

//     return 0;
// }