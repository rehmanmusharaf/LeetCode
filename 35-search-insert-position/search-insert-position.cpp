class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int index=size(nums);
        for(int i=0;i<size(nums);i++)
        {
            if(nums[i]==target)
            {
                return i;
            }
            if(nums[i]>target)
            {
                return i;
            }
        }
        return index;
    }
};