class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<size(nums);i++)
        {
        if(i>0&&nums[i]==nums[i-1])continue;
        for(int j=i+1;j<size(nums);j++)
        {
                 if (j > i + 1 && nums[j] == nums[j - 1]) continue; // Skip duplicates for j
        int p=j+1,q=size(nums)-1;
        while(p<q)
        {
        long long sum=(long long)nums[i]+(long long)nums[j]+(long long)nums[p]+(long long)nums[q];
        if(sum<target)
        p++;
        else if(sum>target)
        q--;
        else if(sum==target)
        {
        ans.push_back({nums[i],nums[j],nums[p],nums[q]});
        p++;q--;
        while(p<q&&nums[p]==nums[p-1])p++;
        }
        }
        }   
        }
        return ans;
    }
};