class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int i=0,j=0,n=size(matrix[0]),m=size(matrix);
    while(i<n&&j<m)
    {
        if(target>=matrix[i][j]&&target<=matrix[i][n-1])
        {
        for(int k=i;k<n;k++)
        {
            if(matrix[i][k]==target)
            {
                return true;
            }
        }
        }
        if(target>=matrix[i][j]&&target<=matrix[m-1][i])
        {
        for(int k=j;k<m;k++)
        {
            if(matrix[k][i]==target)
            {
                return true;
            }
        }
        }
        i++;
        j++;
    }
    return false;
    }
};