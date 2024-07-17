#include <cmath> // For the abs function
#include <algorithm> // For std::sort
using namespace std;
class Solution {
public:
    int maximumGap(vector<int>& nums) 
    {
        if(2>size(nums))
        {
            return 0;
        }
    // for(int i=0;i<size(nums);i++)
    // {
    //     for(int j=i;j<size(nums);j++)
    //     {
    //     if(nums[i]>nums[j])
    //     {
    //         int temp=nums[i];
    //         nums[i]=nums[j];
    //         nums[j]=temp;
    //     }
    //     }
    // }
       sort(nums.begin(), nums.end());
    int maxgap=nums[0]-nums[1];
    maxgap= abs(maxgap);
    
    for(int i=1;i<size(nums)-1;i++)
    {
        int gap=abs(nums[i]-nums[i+1]);
        cout<<gap<<endl;
        if(gap>maxgap)
        {
            maxgap=gap;
        }
    }
    return maxgap;
    }
};