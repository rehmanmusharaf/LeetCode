class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int num=0;      
  unordered_map<int, int> umap;
  for(int i=0;i<size(nums);i++)
  {
    umap[nums[i]]++;
  } 
    for(auto it:umap)
    {
        if(it.second==1)
        {
            num=it.first;
        }
    }
    return num;
    }
};