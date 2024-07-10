#include<unordered_map>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    unordered_map<int,int> umap;
    for(int i=0;i<size(nums);i++)
    {
        umap[nums[i]]++;
    }
    for(auto x:umap)
    {
        if(x.second>1)
        return true;
    }
    return false;
    }
};