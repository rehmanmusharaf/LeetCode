class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
     vector<int> ans;
     int n=size(matrix),m=size(matrix[0]);
     int srow=0,erow=n-1,scol=0,ecol=m-1;
     while(srow<=erow&&scol<=ecol)
     {
        for(int i=scol;i<=ecol;i++)
        {
            cout<<"1matrix["<<srow<<"]["<<i<<"]: "<<matrix[srow][i]<<endl;
            ans.push_back(matrix[srow][i]);
        }
        for(int i=srow+1;i<=erow;i++)
        {
            cout<<"2matrix["<<i<<"]["<<ecol<<"]: "<<matrix[i][ecol]<<endl;

            ans.push_back(matrix[i][ecol]);
        }
        // for(int i=ecol-1;i>=scol;i--)
        // {
        //     cout<<"3matrix["<<erow<<"]["<<i<<"]: "<<matrix[erow][i]<<endl;
        //     ans.push_back(matrix[erow][i]);
        // }
        // for(int i=erow-1;i>=srow+1;i--)
        // {
        //     cout<<"4matrix["<<i<<"]["<<scol<<"]: "<<matrix[i][scol]<<endl;
        //     ans.push_back(matrix[i][scol]);
        // }
        if (srow < erow) { // prevent duplicate bottom row
    for (int i = ecol - 1; i >= scol; i--)
        ans.push_back(matrix[erow][i]);
}

if (scol < ecol) { // prevent duplicate left column
    for (int i = erow - 1; i >= srow + 1; i--)
        ans.push_back(matrix[i][scol]);
}

        srow++;
        erow--;
        scol++;
        ecol--;
        cout<<"array after 1 traversla: "<<endl;
        for(int i=0;i<size(ans);i++)
        cout<<ans[i]<<endl;
     }
     return ans;   
    }
};