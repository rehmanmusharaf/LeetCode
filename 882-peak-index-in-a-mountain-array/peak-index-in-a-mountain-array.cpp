class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int maxNum=0;
        for(int i=0;i<size(arr);i++)
        {
            if(arr[maxNum]<arr[i])
            maxNum=i;
        }
        return maxNum;
    }
};