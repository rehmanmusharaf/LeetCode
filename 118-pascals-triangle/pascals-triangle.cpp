class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if(numRows<1)
        return ans;
        for(int i=1;i<=numRows;i++)
        {
        for(int j=0;j<i;j++)
        {
        if(j==0||j==i-1)
        {
        if(j==0)
        ans.push_back(vector<int>());
        ans[i-1].push_back(1);
        }
        else
        {
            int num=ans[i-2][j-1]+ans[i-2][j];
cout<<"ans["<<i-2<<"]["<<j-1<<"]: "<<ans[i-2][j-1]<<endl;
cout<<"ans["<<i-2<<"]["<<j<<"]: "<<ans[i-2][j]<<endl;

            ans[i-1].push_back(num);
            // int num=6;
            // ans[i-1].push_back(num);
        }
        }
        }
    return ans;
    }
};