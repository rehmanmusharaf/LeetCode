class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
    for(int i=0;i<size(nums);i++)
    {
        bool check=false;
     for(int j=0;j<size(nums);j++)
     {
        if(i==nums[j])
        {
            check=true;
        }
     }
     if(check==false)
     {
        return i;
     }
    }
    return size(nums);
    }
};