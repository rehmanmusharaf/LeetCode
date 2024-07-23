using namespace std;
class Solution {
public:
bool isValid(int i,int j,int n,int m,vector<vector<char>>& board)
{
if(i>=0&&i<n&&j>=0&&j<m&&board[i][j]=='O')
{
return true;
}
return false;
}
void dfsRec(int i,int j,int n,int m,vector<vector<char>>& board)
    {
    board[i][j]='b';
if(isValid(i+1, j, n, m, board))
    {
          dfsRec(i+1,j,n,m,board);
    }   
if(isValid(i-1, j, n, m, board))
    {
          dfsRec(i-1,j,n,m,board);
    }
if(isValid(i, j+1, n, m, board))
    {
          dfsRec(i,j+1,n,m,board);
    }
if(isValid(i, j-1, n, m, board))
    {
    dfsRec(i,j-1,n,m,board);
    }

    }
    void convert(vector<vector<char>>& board,int n,int m)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
            cout<<"board["<<i<<"]["<<j<<"]="<<board[i][j]<<endl;
            if(board[i][j]=='O')
            {
            board[i][j]='X';
            }
            if(board[i][j]=='b')
            {
            // cout<<'board['<<i<<']['<<j<<']='<<board[i][j];

            board[i][j]='O';
            }
            }
        }
    }
    void solve(vector<vector<char>>& board) {
    int n=board.size();
    int m=board[0].size(); 
    for(int i=0;i<n;i++)
    {
        int j=0;
        if(board[i][j]=='O')
        {
            dfsRec(i,j,n,m,board);
        }
        j=m-1;
        if(board[i][j]=='O')
        {
            dfsRec(i,j,n,m,board);
        }
    }
    

        for (int j = 0; j < m; j++) {
            if (board[0][j] == 'O') {
                dfsRec(0, j, n, m, board); // Top border
            }
            if (board[n - 1][j] == 'O') {
                dfsRec(n - 1, j, n, m, board); // Bottom border
            }
        }

    convert(board,n,m);

    }
};