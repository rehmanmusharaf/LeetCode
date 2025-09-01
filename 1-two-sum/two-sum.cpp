class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int>  m;
    int first,sec;
    for(int i=0;i<size(nums);i++)
    {
    first=nums[i];
    sec=target-nums[i];
    if(m.find(sec)!=m.end())
    {
    return {i,m[sec]};
    }
    m[first]=i;
    }
    return {};
    }
};