#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}

 int n_pow_p(int n,int p){
     if(p==0){
         return 1;
     }
    //  if(p==1){
    //      return n;
    //  }

     return n*n_pow_p(n,p-1);
 }

 int fact(int n){
     if(n==0){
         return 1;
     }
    //  if(n==1){
    //      return 1;
    //  }
     return n*fact(n-1);
 }

// 0 1 1 2 3 5 8 13
int fib(int n){
    // if(n==0) return 0;
    // if(n==1) return 1;
    if(n==0 or n==1) return n;

    return fib(n-1)+fib(n-2);
}

bool sorted(int arr[],int n){
    if(n==1) return true;

    return (arr[0]<arr[1] and sorted(arr+1,n-1));
}

void dec(int n){
    if(n==0){
        // cout<<1<<" ";
        return;
    }
    // if(n==1){
    //     cout<<1<<" ";
    //     return;
    // }
    cout<<n<<" ";
    dec(n-1);
}
void inc(int n){
    if(n==0){
        // cout<<n<<" ";
        return;
    }
    // if(n==1){
    //     cout<<1<<" ";
    //     return;
    // }
    inc(n-1);
    cout<<n<<" ";
}

int first_occ(int arr[],int n,int i,int key){
    if(i==n) return -1;
    if(arr[i]==key) return i;

    return first_occ(arr,n,i+1,key);
}

int last_occ(int arr[],int n,int i,int key){
    if(i==n) return -1;
    if(last_occ(arr,n,i+1,key)!=-1){
        return last_occ(arr,n,i+1,key);
    }
    if(arr[i]==key) return i;
    return -1;

}

void reverse_string(string s){
    if(s=="") return;

    reverse_string(s.substr(1));
    cout<<s[0];
}

void replace_pi(string s){
    if(s=="") return;

    if(s[0]=='p' and s[1]=='i'){
        cout<<"3.14";
        replace_pi(s.substr(2));
    }else
    {
        cout<<s[0];
        replace_pi(s.substr(1));
    }
}

void tower_of_hanoi(int n,char src,char dest,char helper){
    if(n==0) return;

    tower_of_hanoi(n-1,src,helper,dest);
    cout<<"move from "<<src<<" to "<<dest<<endl;
    tower_of_hanoi(n-1,helper,dest,src);
}

string remove_dup(string s){
    if(s=="") return "";

    char ch=s[0];
    string ans = remove_dup(s.substr(1));

    if(ch==ans[0]){
        return ans;
    }
    return ch+ans;
}

string move_x_to_end(string s){
    if(s=="") return "";

    char ch=s[0];
    string ans = move_x_to_end(s.substr(1));

    if(ch=='x'){
        return ans+ch;
    }
    return ch+ans;
}

void subseq(string s,string ans){

    if(s==""){
        cout<<ans<<endl;
        return;
    }
    
    char ch=s[0];
    string ros = s.substr(1);

    subseq(ros,ans);
    subseq(ros,ans+ch);

}

void subseq_A(string s,string ans){

    if(s==""){
        cout<<ans<<endl;
        return;
    }
    
    char ch=s[0];
    int code=ch;
    string ros = s.substr(1);

    subseq_A(ros,ans);
    subseq_A(ros,ans+ch);
    subseq_A(ros,ans+to_string(code)); 
    // subseq_A(ros,ans+"code");

}

string keypadarr[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void keypad(string s,string ans){
    if(s==""){
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    string code = keypadarr[ch-'0'];
    string ros = s.substr(1);

    for(int i=0;i<code.length();i++){
        keypad(ros,ans+code[i]);
    }
}


void permutations(string s,string ans){
    if(s==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
    char ch=s[i];
    string ros = s.substr(0,i)+s.substr(i+1);
    permutations(ros,ans+ch);
    }
}

int count_path(int s,int e){
    if(s==e) return 1;
    if(s>e) return 0;

    int _c=0;
    for(int i=1;i<=6;i++){
        _c+=count_path(s+i,e);
    }
    return _c;
}


int count_maze(int n,int i,int j){
    if(i==n-1 and j==n-1) return 1;
    if(i>=n or j>=n) return 0;

    return count_maze(n,i+1,j) + count_maze(n,i,j+1);
}

int tiling_ways(int n){
    if(n==1 or n==0) return n;
    return tiling_ways(n-1) + tiling_ways(n-2);
}

int ladders(int n,int k){
    if(n==1){
        return 1;
    }
    if(n==0){                     //n=4,k=3 ans=7::
        return 0;
    }
    int ans=0;
    for(int i=1;i<k;i++){
        ans+=ladders(n-i,k);
    }
    return ans;
}

int friends_pairing(int n){
if(n==0 or n==1 or n==2) return n;
return friends_pairing(n-1)+friends_pairing(n-2)*(n-1);
}


int knapsack(int val[],int w[],int n,int W){
    if(n==0 or W==0) return 0;

    if(w[n]>W) return knapsack(val,w,n-1,W);

    return max(val[n-1]+knapsack(val,w,n-1,W-w[n-1]),knapsack(val,w,n-1,W));    
}


int main(){


    // cout<<sum(4);

    // cout<<n_pow_p(3,4);

    // cout<<fact(4);

    // for(int i=0;i<8;i++){
    //     cout<<fib(i)<<" ";
    // }

    // int arr[]={1,2,3,4,5};
    // cout<<sorted(arr,5);

    // dec(10);
    // cout<<endl;
    // inc(10);

    //  int arr[]={4,2,1,2,5,2,7};
    //  cout<<first_occ(arr,7,0,2);
    //  cout<<last_occ(arr,7,0,2);

    // reverse_string("binod");

    // replace_pi("pippppiiiipi");

    //  tower_of_hanoi(3,'A','C','B');

    //  cout<<remove_dup("aaabbcccdddd");

    // cout<<move_x_to_end("xabxcxdx");

    //    subseq("ABC","");

    //    subseq_A("AB","");

    // keypad("23","");

    //   permutations("ABC","");

    // cout<<count_path(0,3);

    // cout<<count_maze(3,0,0);

    // cout<<tiling_ways(4);

    // cout<<friends_pairing(4);

    // int w[]={10,20,30};
    // int val[]={100,50,150};
    // int W=50;
    // cout<<knapsack(val,w,3,W);



}