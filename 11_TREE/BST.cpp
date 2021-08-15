#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
node* insert(node* root , int val)
{
    if(root == NULL)
    {
        return new node(val);
    }
    if(val < root->data)
    {
        root->left = insert(root->left,val);
    }
    else
    {
        root->right = insert(root->right,val);
    }
    return root;
}
void inorder(node* root)
{
    if(root == NULL)
    {
        return; 
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node* root)
{
    if(root == NULL)
    {
        return; 
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

node* searchInBst(node* root , int val)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(val == root->data)
    { 
        return root;
    }
    else if(val < root->data)
    {
        return searchInBst(root->left,val);
    }

        return searchInBst(root->right,val);
}
node* succ(node* root)
{
    node* t = root;
    while (t and t->left)
    {
        t = t->left;
    }
    return t;
}
node* deleteInBst(node* root,int val)
{
    if(val < root->data)
    {   
        root->left = deleteInBst(root->left,val);
    }else if(val > root->data)
    {
        root->right = deleteInBst(root->right,val);
    }else
    {
        if(root->left==NULL)
        {
            node* t = root->right;
            free(root);
            return t;
        }else if(root->right==NULL)
        {
            node* t = root->left;
            free(root);
            return t;
        }else
        {
            node* t = succ(root->right);
            root->data = t->data;
            root->right = deleteInBst(root->right,t->data);
        }
    }
        return root;
}

node* constructBst(int pre[],int* idx,int key,int min,int max,int n)
{
    if(*idx >= n)
    {
        return NULL;
    }
    node* root = NULL;
    if(key > min and key < max)
    {
       root = new node(key);
       *idx = *idx + 1;
       if(*idx < n)
       {
           root->left = constructBst(pre,idx,pre[*idx],min,key,n);
       }
       if(*idx < n)
       {
           root->right = constructBst(pre,idx,pre[*idx],key,max,n);
       }
    }
  return root;
}

bool isbst(node* root,int min,int max)
{
    if(root==NULL)
    {
        return true;
    }
    if(root->data < min)
    {
        return false;
    }
    if(root->data > max)
    {
        return false;
    }
    return (isbst(root->left,min,root->data) and isbst(root->right,root->data,max));
}
node* SortedArrayToBst(int arr[],int start,int end)
{
    if(start > end)
    {
        return NULL;
    }
    int mid = (start + end) / 2;
    node* root = new node(arr[mid]);
    root->left = SortedArrayToBst(arr,start,mid-1);
    root->right = SortedArrayToBst(arr,mid+1,end);
    return root;
}
int arr[101]={0};
int catalan(int n)
{
    if(n <= 1)
    {
        return 1;
    }
    if(arr[n]!=0){
        return arr[n];
    }
    int ans=0;
    for(int i=0;i<=n-1;i++)
    {
        ans+=(catalan(i)*catalan(n-i-1));
    }
   return arr[n] = ans;
}
vector<node*> constructTrees(int start,int end)
{
    vector<node*>Trees;
    if(start>end)
    {
        Trees.push_back(NULL);
        return Trees;
    }
    for(int i=start;i<=end;i++)
    {
        vector<node*>leftsubtrees = constructTrees(start,i-1);
        vector<node*>rightsubtrees = constructTrees(i+1,end);

        for(int j=0;j<leftsubtrees.size();j++)
        {
             node* left = leftsubtrees[j];
             for(int k=0;k<rightsubtrees.size();k++)
             {
               node* right = rightsubtrees[k];
               node* root = new node(i);
               root->right=right;
               root->left=left;
               Trees.push_back(root);
             }
        }
    }
    return Trees;
}

void zigzagTraversal(node* root)
{
    if(root==NULL)
    {
        return;
    }
    stack<node*>NextLevel;
    stack<node*>currLevel;
    bool LeftToRight=true;
    currLevel.push(root);
    while (!currLevel.empty())
    {
        node* temp = currLevel.top();
        currLevel.pop();
        if(temp)
        {
        cout<<temp->data<<" ";
            if(LeftToRight)
            {
                if(temp->left)
                {
                    NextLevel.push(temp->left);
                }
                if(temp->right)
                {
                    NextLevel.push(temp->right);
                }
            }else
            {
                if(temp->right)
                {
                    NextLevel.push(temp->right);
                }
                 if(temp->left)
                 {
                     NextLevel.push(temp->left);
                 }
            }  
        }
        if(currLevel.empty()){
        LeftToRight = !LeftToRight;
        swap(currLevel,NextLevel);
        }
    }   
}

bool IsIdentical(node* root1 ,node* root2)
{
    if(root1==NULL and root2==NULL)
    {
        return true;
    }
    else if(root1==NULL or root2==NULL)
    {
        return false;
    }
    else
    {
        return (root1->data==root2->data and IsIdentical(root1->left,root2->left) and IsIdentical(root1->right,root2->right));
    }
    

}
class info{
    public:
    int size;
    int max;
    int min;
    int ans;
    bool isBST;
};
info LargestBSTinBT(node* root)
{
     if(root == NULL)
     {
         return {0,INT_MIN,INT_MAX,0,true};
     }
     if(root->left == NULL and root->right == NULL)
     {
         return {1,root->data,root->data,1,true};
     }

     info leftinfo = LargestBSTinBT(root->left);
     info rightinfo = LargestBSTinBT(root->right);

     info curr;
     curr.size = (1+leftinfo.size+rightinfo.size);

     if(leftinfo.isBST and rightinfo.isBST and leftinfo.max < root->data and rightinfo.min > root->data)
     {
         curr.min=min(leftinfo.min ,min(root->data,rightinfo.min));
         curr.max=max(rightinfo.max,max(root->data,leftinfo.max));

         curr.ans=curr.size;
         return curr;
     }
     curr.ans=max(leftinfo.ans,rightinfo.ans);
     curr.isBST=false;
     return curr;
}
void calcP(node* root,node** first,node** mid,node** last,node** prev)
{
    if(root==NULL)
    {
        return;
    }
    calcP(root->left,first,mid,last,prev);
    if(*prev and root->data < (*prev)->data)
    {
        if(!*first)
        {
         *first=*prev;
         *mid=root;
        }else
        {
            *last=root;
        }
        
    }
    *prev = root;
    calcP(root->right,first,mid,last,prev);
}
void restoreBST(node* root)
{
    node* first,*last,*mid,*prev;
    first=last=mid=prev=NULL;
    calcP(root,&first,&mid,&last,&prev);

    if(first and last)
    {
        swap(first->data,last->data);
    }else if(first and mid)
    {
        swap(first->data,mid->data);
    }
}
//*******************************************
#include<climits>
#include<bits/stdc++.h>
int main(){
    
    // 5 1 3 4 2 7
    // node* root=NULL;
    // root = insert(root,5);
    // root = insert(root,1);
    // root = insert(root,3);
    // root = insert(root,4);
    // root = insert(root,2);
    // root = insert(root,7);
    // inorder(root);
    // cout<<endl;
    // deleteInBst(root,5);
    // inorder(root);
    // cout<<endl;

    // if(searchInBst(root,20)){
    //     cout<<"present";
    // }else
    // {
    //     cout<<"absent";
    // }   

    // int pre[] = {10,2,1,13,11};
    // int n=5;
    // int idx=0;
    // node* root = constructBst(pre,&idx,pre[0],INT_MIN,INT_MAX,n);
    // preorder(root);

    // node* root = new node(20);
    // root->left = new node(5);
    // root->right = new node(100);
    // if(isbst(root,INT_MIN,INT_MAX))
    // {
    //     cout<<"Valid Bst";
    // }else
    // {
    //     cout<<"Invalid bst";
    // }
    
    // int arr[]={10,20,30,40,50};
    // node* root = SortedArrayToBst(arr,0,4);
    // preorder(root);

    // for(int i=0;i<10;i++)
    // {
    //     cout<<catalan(i)<<" ";
    // }

    // :: Posible BSTs == catalan number ::

    // vector<node*> tt =constructTrees(1,3);
    // for(int i=0;i<tt.size();i++)
    // {
    //     cout<<(i+1)<<" : ";
    //     preorder(tt[i]);
    //     cout<<endl;
    // }

    // node* root = new node(12);
    // root->left = new node(9);
    // root->right = new node(15);
    // root->left->left = new node(5);
    // root->left->right = new node(10);
    // zigzagTraversal(root);
    // cout<<endl;


//    node* root1 = new node(2);
//    root1->left = new node(1);
//    root1->right = new node(3);
//    node* root2 = new node(2);
//    root2->left = new node(1);
//    root2->right = new node(3);
//    if(IsIdentical(root1,root2))
//    {
//        cout<<"BSTs are identical";
//    }else
//    {
//        cout<<"BSTs Not identical";
//    }
   
    //   node* root = new node(15);
    //   root->left = new node(20);
    //   root->right = new node(30);
    //   root->left->left = new node(5);
    //   cout<<LargestBSTinBT(root).ans<<" ";

    // node* root = new node(6);
    // root->left = new node(9);
    // root->right = new node(3);
    // root->left->left = new node(1);
    // root->left->right = new node(4);
    // root->right->right = new node(13);
    // inorder(root);
    // cout<<endl;
    // restoreBST(root);
    // cout<<endl;
    // inorder(root);

//-------------------------------------------------
// set<int,greater<int>>st={1,2,3,2,3};
set<int>st={1,2,3,2,5};
// st.insert({7});
// st.insert({{8}});
// st.insert({{9}});
st.erase(1);
st.erase(st.begin());
for(auto i:st){
    cout<<i<<" ";
}
// cout<<endl;
// cout<<*st.lower_bound(2);
// cout<<*(st.upper_bound(5));
// cout<<(st.upper_bound(5)==st.end());
// for(auto it=st.begin();it!=st.end();it++)
// {
//     cout<<*it<<" ";
// }
// for(auto it=st.rbegin();it!=st.rend();it++)
// {
//     cout<<*it<<" ";
// }









    return 0;
}
//*******************************************


