#include <string>
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if(size(nums)==0)
        return ans;
        if(size(nums)==1)
    {
        ans.push_back(to_string(nums[0]));
        return ans;
    }
        
        int startnum=nums[0];
        int endnum=nums[0];
        int num=nums[0];
        for(int i=1;i<size(nums);i++)
        {
        // cout<<startnum<<"->"<<endnum<<",";
        cout<<nums[i]<<",";
        if(nums[i-1]+1==nums[i])
        {
            endnum=nums[i];
        }
        else
        {
            if(startnum!=endnum)
            {
            ans.push_back(to_string(startnum)+"->"+to_string(endnum));
            // startnum=nums[i];
            // endnum=nums[i];
            }
            else
            {
            ans.push_back(to_string(startnum));
            }
            startnum=nums[i];
            endnum=nums[i];
        }
        }
   if (startnum != endnum) {
            ans.push_back(to_string(startnum) + "->" + to_string(endnum));
        } else {
            ans.push_back(to_string(startnum));
        }
        
        return ans;
    }
};