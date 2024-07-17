class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int peak=0;
        if(nums.size()==0)
        return peak;
        if(nums.size()==2)
        return nums[0]>nums[1]?0:1;

        for(int i=1;i<size(nums);i++)
        {
            if(nums[i]>nums[i-1]&&i==size(nums)-1)
            {
                return size(nums)-1;
            }
            else if(nums[i]>nums[i-1]&&nums[i]>nums[i+1])
            {
                peak=i;
            return peak;
            }
        }
        return peak;
    }
};