#include <iostream>
#include <algorithm> // For std::min and std::max
using namespace std;
class Solution {
public:
// int min(int num1,int num2)
// {
//     return num1<num2?num1:num2;
// }
// int max(int num1,int num2)
// {
//     return num1>num2?num1:num2;
// }

    int maxArea(vector<int>& height) 
    {
    int left=0;
    int right=height.size()-1;
    int maxarea=0;
    while(left<right)
    {
     maxarea=max(maxarea,(right-left)*min(height[left],height[right]));
     if(height[right]>height[left])
     left++;
     else
     right--;
    }
    return maxarea;
    }
};