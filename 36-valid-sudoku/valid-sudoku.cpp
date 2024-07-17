#include<unordered_map>
class Solution {
public:

    bool checkrowcolumn(vector<vector<char>> board,int index)
    {
    unordered_map<int,int> rumap;
    unordered_map<int,int> cumap;
    for (int i = 0; i <= 9; ++i) 
    {
    rumap[i] = 0;
    cumap[i] = 0;
    }
    for(int i=0;i<size(board);i++)
    {
    if(board[index][i]>'9')
    {
        cout<<"if condition run:"<<board[index][i]<<endl;
        return false;
    }
    else
    {
    if(board[index][i]!='.')
    rumap[board[index][i]]++;
    }
    if(board[i][index]>'9')
    {
      cout<<"if condition run:"<<board[i][index]<<endl;
     return false;
    }
    else
    {
    if(board[i][index]!='.')
    cumap[board[i][index]]++;
    }
    }
    for(auto x:rumap)
    {
        if(x.second>1)
        {
            cout<<"if condition run "<<x.second<<endl;
            return false;
        }
    }
    for(auto x:cumap)
    {
        if(x.second>1)
        {
            cout<<"if condition run "<<x.second<<endl;
            return false;
        }
    }
    return true;    
    }
    bool isvalidbox(vector<vector<char>>board,int r,int start)
    {
    cout<<"row is "<<r<<" start is "<<start<<endl;
    unordered_map<int,int> umap;
    for (int i = 0; i <= 9; ++i) 
    {
    umap[i] = 0;
    umap[i] = 0;
    }
    for(int i=r;i<r+3;i++)
    {
        for(int j=start;j<start+3;j++)
        {
            if(board[i][j]>'9')
            {
                cout<<"greater then 9 condition run"<<endl;
                return false;
            }
            else
            {   
                if(board[i][j]!='.')
                {
                cout<<"numbar comes: "<<board[i][j]<<endl;
                umap[board[i][j]]++;
                }
            }
        }
    }
    for(auto x:umap)
    {
        // cout<<"first num: "<<x.first<<" second num : "<<x.second<<endl;
         if(x.second>1)
        {
        // cout<<"repeat condtion run!"<<x.first<<" "<<x.second<<endl;
        return false;
        }
    }
    return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        
        for(int i=0;i<size(board);i++)
        {  
            if(!checkrowcolumn(board,i))
            {
                return false;
            }
        
        }
        int r=0;
        int s=0;
        int count=0;
        for(int i=0;i<9;i++)
        {

        if(!isvalidbox(board,r,s))
        return false;
        else
        {
            if(s>=6)
            {
                s=0;
                r+=3;
            }
            else
            {
                s+=3;
            }
        }              
        }
        return true;
    }
};