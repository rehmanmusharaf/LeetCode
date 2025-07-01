class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
    if(size(nums)==1)
    return nums[0];
    for(int i=0;i<size(nums)-1;i+=2)
    {
    cout<<"nums[i]"<<nums[i]<<" nums[1+i] "<<nums[1+i]<<endl;
    if(nums[i]!=nums[1+i])
    {
    return nums[i];
    }
    }
    return nums[size(nums)-1];
    }
};