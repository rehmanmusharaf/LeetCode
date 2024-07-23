class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int left=0;
        int right=nums.size()-1;
        int count=0;
        while(left<right)
        {
            if(nums[left]+nums[right]==k)
            {
                // cout<<"left is:"<<left<<" right is: "<<right;
                left++;
                right--;
                count++;
                // cout<<"count is: "<<count<<endl;
            }
            else if(nums[left]+nums[right]>k)
            {
                right--;
            }
            else
            {
                left++;
            }
        }
        return count;
    }
};