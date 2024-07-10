#include<unordered_map>
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    vector<int> ans;
    unordered_map<int,int> umap;
    for(int i=0;i<size(nums);i++)
    {
        umap[nums[i]]++;
    }
    for(int i=0;i<k;i++)
    {
        auto it = umap.begin();
        int largeval=it->first;
        int count=it->second;
        for(auto x:umap)
        {
            if(x.second>count)
            {
                largeval=x.first;
                count=x.second;
            }
        }
        ans.push_back(largeval);
        umap.erase(largeval);
    }
    return ans;
    }
};