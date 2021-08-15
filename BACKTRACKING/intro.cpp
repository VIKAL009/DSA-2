#include <iostream>
#include<vector>
using namespace std;

/*

bool is_safe(int **arr, int x, int y, int n)
{
    if (x < n and y < n and arr[x][y] == 1)
    {
        return true;
    }

        return false;

}

bool rat_in_maze(int **arr, int x, int y, int n, int **solArr,vector<string>&vec,string s)
{
    if (x == n - 1 and y == n - 1)
    {
        solArr[x][y] = 1;
        vec.push_back(s);
          for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << solArr[i][j] << " ";
            }
            cout << endl;
        }
        cout<<endl<<endl<<endl;
        
        // return true;  //--> print all posible paths:
    }
    if (is_safe(arr, x, y, n))
    {
        // solArr[x][y] = 1;
        if (rat_in_maze(arr, x + 1, y, n, solArr,vec,s+'D'))
        {
            // return true;
        }
        if (rat_in_maze(arr, x, y + 1, n, solArr,vec,s+'R'))
        {
            // return true;
        }
        //solArr[x][y] = 0; //bactracking;
        // return false;
    }
    // return false;
}

int main()
{

    int n;
    cin >> n;

    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int **solArr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        solArr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            solArr[i][j] = 0;
        }
    }
    vector<string>vec;
    string s ="";
    if (rat_in_maze(arr, 0, 0, n, solArr,vec,s))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                // cout << solArr[i][j] << " ";
            }
            cout << endl;
        }
    }
    for(auto i:vec){
        cout<<i<<" ";
    }
}


4
1 0 0 1
1 1 1 1
0 1 0 1
0 1 0 1

1 0 0 0 
1 1 1 1
0 0 0 1
0 0 0 1
*/


bool _is_safe(int **arr, int x, int y, int n)
{

    for (int row = 0; row < x; row++)
    {
        if (arr[row][y] == 1)
        {
            return false;
        }

    }
        int row = x;
        int col = y;
        while (row >= 0 and col >= 0)
        {
            if (arr[row][col] == 1)
            {
                return false;
            }
            row--;
            col--;
        }

        row = x;
        col = y;
        while (row >= 0 and col < n)
        {
            if (arr[row][col] == 1)
            {
                return false;
            }
            row--;
            col++;
        }
    return true;
}

bool nQueen(int **arr, int x, int n)
{
    if (x >= n)
    {
        return true;
    }
    for (int col = 0; col < n; col++)
    {
        if (_is_safe(arr, x, col, n))
        {
            arr[x][col] = 1;
            if (nQueen(arr, x + 1, n))
            {
                return true;
            }
            arr[x][col] = 0; //backtracking
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }

    if (nQueen(arr, 0, n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
}



/*



bool isSafe(vector<vector<int>> &board, int i, int j, int n){
    for(int row=0; row<i; row++){
        if(board[row][j]==1) return false;
    }
    int x=i, y=j;
    while(x>=0 && y>=0){
        if(board[x][y]==1) return false;
        x--;
        y--;
    }
    x=i, y=j;
    while(x>=0 && y<n){
        if(board[x][y]==1) return false;
        x--;
        y++;
    }
    return true;
}

bool solve(vector<vector<int>> &board, vector<vector<string>> &res, int i, int n){
    if(i==n){
        vector<string> ans;
        for(int i=0; i<n; i++){
            string s="";
            for(int j=0; j<n; j++){
                if(board[i][j]==1) s.push_back('Q');
                else s.push_back('.');
            }
            ans.push_back(s);
        }
        res.push_back(ans);
        return false;
    }
    for(int j=0; j<n; j++){
        if(isSafe(board, i, j, n)){
            board[i][j]=1;
            bool nextQueenPossible= solve(board, res, i+1, n);
            if(nextQueenPossible) return true;
            board[i][j]=0;
        }
    }
    return false;
}

vector<vector<string> > Solution::solveNQueens(int A){
    vector<vector<int>> board(A, vector<int>(A));
    vector<vector<string>> res;
    vector<string> ans;
    solve(board, res, 0, A);
    return res;
}

*/