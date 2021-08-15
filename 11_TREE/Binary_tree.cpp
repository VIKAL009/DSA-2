#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node *right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
//**********************************************************************************************************************
node* creatnode(int x){
    node* newnode = new node(x);
    return newnode;
}
node* insertnode(node* root,int x){
    node* temp = creatnode(x);
    if(root==NULL){
        root = temp;
    }else{
        if(x<=root->data){
            root->left = insertnode(root->left,x);
        }else{
            root->right = insertnode(root->right,x);
        }
    }
    return root;
}
// void preorder(node* root){
//     if(root==NULL){
//         return ;
//     }
//     else{
//         cout<<root->data<<" ";
//         preorder(root->left);
//         preorder(root->right);
//     }
// }
// void postorder(node* root){
//     if(root==NULL){
//         return ;
//     }
//     else{
//         postorder(root->left);
//         postorder(root->right);
//         cout<<root->data<<" ";
//     }
// }
// void inorder(node* root){
//     if(root==NULL){
//         return ;
//     }
//     else{
//         inorder(root->left);
//         cout<<root->data<<" ";
//         inorder(root->right);
//     }
// }
// int height(node* root){
//     if(root==NULL){
//         return 0;
//         // return -1;
//     }else{
//         return max(height(root->left),height(root->right))+1;
//     }
// }
// void levelorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     queue<node*>Q;
//     Q.push(root);
//     while(!Q.empty()){
//         node* temp = Q.front();
//         Q.pop();
//         cout<<temp->data<<" ";
//         if(temp->left!=NULL){
//         Q.push(temp->left);
//         }
//         if(temp->right!=NULL){
//         Q.push(temp->right);
//         }
//     }
// }
// bool search(node* root,int x){
//     if(root==NULL){
//         return false;
//     }else{
//     if(root->data==x){
//         return true;
//     }else{
//         if(x<=root->data){
//             return search(root->left,x);
//         }else{
//             return search(root->right,x);
//         }
//     }
//     }
// }
// int findmax(node* root){
//     if(root->right==NULL){
//         return root->data;
//     }else{
//         return findmax(root->right);
//     }
// }
// int findmin(node* root){
//     if(root->left==NULL){
//         return root->data;
//     }else{
//         return findmin(root->left);
//     }
// }
// bool isbstutill(node* root,int minn,int maxx){
//     if(root==NULL){
//         return true;
//     }
//     else if(root->data>minn 
//     && root->data<maxx
//     && isbstutill(root->left,minn,root->data)
//     && isbstutill(root->right,root->data,maxx)){
//         return true;
//     }else{
//      return false;
//     }
        
// }
// bool isbst(node* root){
//     return isbstutill(root,INT_MIN,INT_MAX);
// }




//********************************************************************************************************************************************************
// int __search(int in[],int start,int end,int curr){
//     for(int i=start;i<=end;i++){
//           if(in[i]==curr){
//               return i;
//           }
//     }
//         return -1;   
// }

//*******preorder     inorder
//*******postorder    inorder
//*******preorder     postorder   only possible in case of full binary tree::



/*

 TreeNode * solve(vector<int>&A,vector<int>&B,int s,int e,int &b)
 {
     if(s>e) return NULL;
     int r_v=A[b],mid;
     for(int i=s;i<=e;i++)
     {
         if(B[i]==r_v)
         {
             mid=i;
             break;
         }
     }
     b++;
     TreeNode * root=new TreeNode(r_v);
     root->left=solve(A,B,s,mid-1,b);
     root->right=solve(A,B,mid+1,e,b);
     return root;
 }


 */




// node* builtTree(int pre[],int in[],int start,int end){
//     static int idx=0;
//     if(start>end){
//         return NULL;
//     }

//     int curr=pre[idx];
//     idx++;
//     node* newnode=new node(curr);
//     if(start==end){
//         return newnode;
//     }

//     int pos = __search(in,start,end,curr);
//     newnode->left=builtTree(pre,in,start,pos-1);
//     newnode->right=builtTree(pre,in,pos+1,end);

//     return newnode;
// }

// node* builtTree(int post[],int in[],int start,int end){
//     static int idx=4;
//     if(start>end){
//         return NULL;
//     }

//     int curr=post[idx];
//     idx--;
//     node* newnode=new node(curr);
//     if(start==end){
//         return newnode;
//     }

//     int pos = __search(in,start,end,curr);
//     newnode->left=builtTree(post,in,start,pos-1);
//     newnode->right=builtTree(post,in,pos+1,end);

//     return newnode;
// }
void __print_in(node* root){
    if(root==NULL){
        return ;
    }
    else{
        __print_in(root->left);
        cout<<root->data<<" ";
        __print_in(root->right);
    }
}

// void __Level_order(node* root){
//     if(root==NULL){
//         return;
//     }
//     queue<node*>Q;
//     Q.push(root);
//     Q.push(NULL);
//     int Level=0;
//     int sum=0;
//     int c=0;
//     while(!Q.empty()){
//         node* p = Q.front();
//         Q.pop();
//         if(p!=NULL){  
//             sum+=p->data;
//         cout<<p->data<<" ";
//             if(p->left!=NULL){
//                 Q.push(p->left);
//             }
//             if(p->right!=NULL){
//                 Q.push(p->right);
//             }
//         }else if(!Q.empty())
//         {
//            cout<<endl<<Level<<" "<<sum<<endl; 
//            Level++;
//            sum=0;
//            Q.push(NULL);
//         }
   
//     }
//     cout<<endl<<Level<<" "<<sum<<endl;
    
// }

// int __countNodes(node* root){

//     if(root==NULL){
//         return 0;
//     }
//     return __countNodes(root->left) + __countNodes(root->right) + 1;
// }
// int __sumNodes(node* root){

//     if(root==NULL){
//         return 0;
//     }
//     return __sumNodes(root->left) + __sumNodes(root->right) + root->data;
// }

int __Height(node* root){
    if(root==NULL){
        return 0;
    }
    return max(__Height(root->left),__Height(root->right))+1;
}

// int Diameter(node*root){

//    if(root==NULL){
//        return 0;
//    }
//     int lH=__Height(root->left);
//     int rH=__Height(root->right);
//     int curr_dia=(lH+rH+1);

//     int lD=Diameter(root->left);
//     int rD=Diameter(root->right);
//     return max(curr_dia,max(lD,rD));
// }

// int __Dia(node* root,int *Height){
//     if(root==NULL){
//      *Height=0;
//      return 0;
//     }
//     int lh=0,rh=0;
//     int ld=__Dia(root->left,&lh);
//     int rd=__Dia(root->right,&rh);

//     int curdia=lh+rh+1;
//     *Height=max(lh,rh)+1;
//     return max(curdia,max(ld,rd));
// }

// void sum_rep(node* root){
//     if(root==NULL){
//         return;
//     }

//     sum_rep(root->left);
//     sum_rep(root->right);

//     if(root->right!=NULL){
//         root->data+=root->right->data;
//     }

//     if(root->left!=NULL){
//         root->data+=root->left->data;
//     }
// }
//*******1
// bool is_balance(node* root){
//     if(root==NULL){
//         return true;
//     }

//     if(is_balance(root->left)==false){
//          return false;
//     }
//     if(is_balance(root->right)==false){
//         return false;
//     }
//     int lh=__Height(root->left);
//     int rh=__Height(root->right);
//     if(abs(lh-rh)<=1){
//         return true;
//     }else
//     {
//        return false;
//     }
    
// }

//*******2
// bool is_balance(node* root,int* Height){
//     if(root==NULL){
//         return true;
//     }

//     int lh=0,rh=0;
//     if(is_balance(root->left,&lh)==false){
//          return false;
//     }
//     if(is_balance(root->right,&rh)==false){
//         return false;
//     }
//     *Height=max(lh,rh)+1;
//     // int lh=__Height(root->left);
//     // int rh=__Height(root->right);
//     if(abs(lh-rh)<=1){
//         return true;
//     }else
//     {
//        return false;
//     }
    
// }

// void Rightview(node* root){
//     if(root==NULL){
//         return;
//     }
//     queue<node*>Q;
//     Q.push(root);
//     while (!Q.empty())
//     {
//         int n = Q.size();
//         for(int i=0;i<n;i++){
//             node* p = Q.front();
//             Q.pop();
//             if(i==n-1){
//                 cout<<p->data<<" ";
//             }
//             if(p->left!=NULL){
//                 Q.push(p->left);
//             }
//             if(p->right!=NULL){
//                 Q.push(p->right);
//             }
//         }
//     }
// }

// void Leftview(node* root){
//     if(root==NULL){
//         return;
//     }
//     queue<node*>Q;
//     Q.push(root);
//     while (!Q.empty())
//     {
//         int n = Q.size();
//         for(int i=0;i<n;i++){
//             node* p = Q.front();
//             Q.pop();
//             if(i==0){
//                 cout<<p->data<<" ";
//             }
//             if(p->left!=NULL){
//                 Q.push(p->left);
//             }
//             if(p->right!=NULL){
//                 Q.push(p->right);
//             }
//         }
//     }
// }

// node* LCA(node* root,int n1,int n2){
//     if(root==NULL){
//         return root;
//     }
//     if(root->data==n1 or root->data==n2){
//         return root;
//     }
//     node* l = LCA(root->left,n1,n2);
//     node* r = LCA(root->right,n1,n2);
//     if(l!=NULL and r!=NULL){
//         return root;
//     }
//     // if(l==NULL and r==NULL){
//     //     return NULL;
//     // }
//     if(l!=NULL){
//         // return LCA(root->left,n1,n2);
//         return l;
//     }
//     // return LCA(root->right,n1,n2);
//     return r;
// }

// int findD(node* root,int k,int dis){
//     if(root==NULL){
//         return -1;
//     }
//     if(root->data==k){
//         return dis;
//     }
//     int ld= findD(root->left,k,dis+1);
//     if(ld!=-1){
//         return ld;
//     }
//     return findD(root->right,k,dis+1);
// }
// int Distbwnodes(node* root,int n1,int n2){
//     node* lca = LCA(root,n1,n2);
//     int d1=findD(lca,n1,0);
//     int d2=findD(lca,n2,0);
//     return d1+d2;
// }

// void flatten(node* root){
//     if(root==NULL or (root->left==NULL and root->right==NULL)){
//         return;
//     }
//     if(root->left!=NULL){
//         flatten(root->left);

//         node* temp= root->right;
//         root->right=root->left;
//         root->left=NULL;

//         node* t=root->right;
//         while (t->right!=NULL)
//         {
//             t=t->right;
//         }
//         t->right=temp;
        
//     }
//     flatten(root->right);
// }

// //case 1
// void printSubtreeNodes(node* root,int k){
//     if(root==NULL or k<0){
//         return;
//     }
//     if(k==0){
//         cout<<root->data<<" ";
//         return;
//     }
//     printSubtreeNodes(root->left,k-1);
//     printSubtreeNodes(root->right,k-1);
// }
// //case 2
// int printNodesAtK(node* root,node* target,int k){
//     if(root==NULL){
//         return -1;
//     }
//     if(root==target){
//         printSubtreeNodes(root,k);
//         return 0;
//     }

//         int dl=printNodesAtK(root->left,target,k);
//         if(dl!=-1){
//             if(dl+1==k){
//                 cout<<root->data<<" ";
//             }else
//             {
//                 printSubtreeNodes(root->right,k-dl-2);
//             }
//             return 1+dl;
//         }
//         int dr=printNodesAtK(root->right,target,k);
//         if(dr!=-1){
//             if(dr+1==k){
//                 cout<<root->data<<" ";
//             }else
//             {
//                 printSubtreeNodes(root->left,k-dr-2);
//             }
//             return 1+dr;
//         }
//     return -1;
// }
// bool getpath(node* root,int key,vector<int>&vec){
//     if(root==NULL){
//         return false;
//     }
//     vec.push_back(root->data);
//     if(root->data==key){
//         return true;
//     }
//     if(getpath(root->left,key,vec) or getpath(root->right,key,vec)){
//         return true;
//     }
//     vec.pop_back();
//     return false;

// }

// int LCA(node* root,int n1,int n2){
//     vector<int>path1,path2;

//     if(!getpath(root,n1,path1) or !getpath(root,n2,path2)){
//         return -1;
//     }
//     int pc;
//     for(pc=0;pc<path1.size() and path2.size();pc++){
//         if(path1[pc]!=path2[pc]){
//             break;
//         }
//     }
//     return path1[pc-1];
// }

// node* LCA2(node* root,int n1,int n2){
//     if(root==NULL){
//         return root;
//     }
//     if(root->data==n1 or root->data == n2){
//         return root;
//     }
//      node* l = LCA2(root->left,n1,n2);
//      node* r = LCA2(root->right,n1,n2);
//     if(l and r){
//         return root;
//     }
//     if(l!=NULL){
//         return l;
//     }
//     return r;
// }

/**

 TreeNode* solve(TreeNode* A,int B,int C){
        if(A==NULL){
        return A;
    }
    if(A->val==B or A->val==C){
        return A;
    }
    TreeNode* a = solve(A->left,B,C);
    TreeNode* b = solve(A->right,B,C);
    if(a and b){
        return A;
    }
    if(a!=NULL){
        return a;
    }
    return b;
 }
  bool find(TreeNode *root, int val1) {
            if (!root) return false;
            if (root->val == val1) return true;
            return (find(root->left, val1) || find(root->right, val1));
        }
int Solution::lca(TreeNode* A, int B, int C) {
     if (!find(A, B) || !find(A, C)) return -1;
    TreeNode* k = solve(A,B,C);
   if(k){
       return k->val;
   }
   return -1;
}







*/
// #include<bits/stdc++.h>
// int maxPathSumUtil(node* root,int &ans){
//     if(root==NULL){
//         return 0;
//     }

//     int left = maxPathSumUtil(root->left,ans);
//     int right = maxPathSumUtil(root->right,ans);
    
//     int nodemaxx = max(max(root->data,root->data+left+right),max(root->data+left,root->data+right));
//     ans = max(ans,nodemaxx);

//     int singlePathSum=max(root->data,max(root->data+left,root->data+right));
//     return singlePathSum;
// }
// int maxPathSum(node* root){
//     int ans = INT_MIN;
//     maxPathSumUtil(root,ans);
//     return ans;
// }

int main(){
    node* root = NULL;


                                    /*       4         --------->first level  ::   height = 1;   * max nodes at level L = 2^L;
                                            / \       
                                           2   6     --------->second level                      * max nodes in a tree of Height H = 2^H-1; if(H0=1)
                                          / \  / \                                               * For n nodes min poss. height/Levels =m log(N+1);
                                         1   3 5  7   --------->third level                      * L leaves  tree has at least log(N+1)+1 number of levels         
                                    */
    root = insertnode(root,4);
    root = insertnode(root,2);                                 
    root = insertnode(root,3);                                  
    root = insertnode(root,1);                                    
    root = insertnode(root,6);                                      
    root = insertnode(root,5);                                       
    root = insertnode(root,7);

    // inorder(root);
    // cout<<endl;
    // postorder(root);
    // cout<<endl;
    // preorder(root);
    // cout<<endl;

    // cout<<height(root)<<endl;

    // levelorder(root);

    // cout<<search(root,3);

    // cout<<findmax(root);

    // cout<<findmin(root);

    // if(isbst(root)){
    //     cout<<"hai";
    // }else{
    //     cout<<"nhi hai";
    // }

    //********************************************************************************************************************

    // int __preorder[]={1,2,4,3,5};
    // int __inorder[]={4,2,1,5,3};
    // node* root = builtTree(__preorder,__inorder,0,4);
    // __print_in(root);

    // int __postorder[]={4,2,5,3,1};
    // int __inorder[]={4,2,1,5,3};
    // node* root = builtTree(__postorder,__inorder,0,4);
    // __print_in(root);
    
    //******************************************************

    // __Level_order(root);

    // cout<<__countNodes(root)<<" "<<__sumNodes(root);

    // cout<<__Height(root);----<(O(n))>::

    // cout<<Diameter(root);----<(O(n2))>::

    // int Height = 0;
    // cout<<__Dia(root,&Height);----<(O(n))>::
    // cout<<Height;

    // __print_in(root);
    // cout<<endl;
    // sum_rep(root);-----<(O(n))>::
    // __print_in(root);


    // node* root2=NULL;
    // int Height=0;
    // root2=creatnode(2);
    // root2->left=creatnode(3);
    // root2->left->left=creatnode(3);
    // if(is_balance(root2,&Height)){//---------------<(O(n2))>::
    //     cout<<"balanced";
    // }else
    // {
    //     cout<<"Unblanced";
    // }
    // __print_in(root2);

    // Rightview(root);-----<(O(n))>::

    // Leftview(root);

    // cout<<Distbwnodes(root,1,3);

    // flatten(root);
    // __print_in(root);

    // printNodesAtK(root,root,2);

    // cout<<LCA(root,5,7);--------<(O(n))>::
    // cout<<LCA2(root,1,7)->data;--------<(O(n))>::

    // cout<<maxPathSum(root);
    






}