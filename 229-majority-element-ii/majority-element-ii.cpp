#include <unordered_map> 
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       vector<int> ans;
       unordered_map<int,int> umap;
       for(int i=0;i<size(nums);i++)
       {
        umap[nums[i]]++;
       }
        for (auto x : umap)
        {
        if(x.second>(size(nums))/3)
        {
            ans.push_back(x.first);
        } 
        cout << x.first << " " <<x.second << endl; 
        }
        return ans; 
        }
    
};