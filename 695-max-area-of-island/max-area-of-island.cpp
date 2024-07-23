class Solution {
public:
bool isValid(int i,int j,int n,int m,vector<vector<int>>& grid)
{
if(i>=0&&i<n&&j>=0&&j<m&&grid[i][j]==1)
return true;
return false;
}
    void dfsRec(int i,int j,int n,int m,int &area,vector<vector<int>>& grid)
    {
    area++;
    grid[i][j]=0;
    if(isValid(i+1,j,n,m,grid))
    {
    dfsRec(i+1,j, n, m,area,grid);
    }
    if(isValid(i-1,j,n,m,grid))
    {
    dfsRec(i-1,j, n, m,area,grid);
    }
    if(isValid(i,j+1,n,m,grid))
    {
    dfsRec(i,j+1, n, m,area,grid);
    }
    if(isValid(i,j-1,n,m,grid))
    {
    dfsRec(i,j-1, n, m,area,grid);
    }
    // return area;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
    int n=grid.size();
    int m=grid[0].size();
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]==1)
            {
            int area=0;
            dfsRec(i,j,n,m,area,grid);
            ans=max(ans,area);
            }
        }
    }       
    return ans; 
    }
};