class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0;i<size(nums)-1;i++)
        {
            for(int j=0;j<size(nums)-1;j++)
            {
                if(nums[j]>nums[1+j])
                {
                    int temp=nums[1+j];
                    nums[1+j]=nums[j];
                    nums[j]=temp;
                }
            }
        }
    }
};