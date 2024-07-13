#include<unordered_map>
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) 
    {
    unordered_map<int,int> result;
    int ans=0;
    for(int i=0;i<size(edges);i++)
    {
        result[edges[i][0]]++;
        result[edges[i][1]]++;
    }
    for(auto x:result)
    {
        if(x.second==size(edges))
        {
        return x.first;
        }
    } 
return ans;
    }
};