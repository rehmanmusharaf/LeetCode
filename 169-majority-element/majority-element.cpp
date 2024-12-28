class Solution {
public:
    int majorityElement(vector<int>& nums) {
    if(size(nums)<1)
    return -1;
    sort(nums.begin(),nums.end());
    int count=1;
    int ans=-1;
    int ans2;
    int num=nums[0];
    for(int i=1;i<size(nums);i++)
    {
    if(num==nums[i])
    {
        count++;
    }
    else
    {
    if(ans<count)
    {
    ans=count;
    ans2=num;
    }
    num=nums[i];
    count=1;
    }
    }

    if(count>ans)
    return nums[size(nums)-1];

    return ans2;

    }
};