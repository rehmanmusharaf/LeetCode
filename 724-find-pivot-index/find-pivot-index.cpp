class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        int leftsum=0;
        for(int i=0;i<size(nums);i++)
        {
            sum+=nums[i];
        }
        for(int i=0;i<size(nums);i++)
        {
            if(sum-nums[i]==leftsum)
            {
                return i;
            }
            sum=sum-nums[i];
            leftsum+=nums[i];
        }
        return -1;
    }
};