class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
    vector<int> ansarr(n+1,0);
    // int n=size(trust);
    for(int i=0;i<size(trust);i++)
    {
    ansarr[trust[i][0]]--;
    ansarr[trust[i][1]]++;
    } 
       for (int i = 1; i <= n; i++) {
            if (ansarr[i] == n - 1) {
                return i;
            }
        }
    return -1;
    }
};