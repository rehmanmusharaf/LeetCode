class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i=0;i<size(nums);i++)
        {
            if(target==nums[i])
            {
                return i;
            }
        }
        return -1;
    }
};