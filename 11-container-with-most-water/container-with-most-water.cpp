using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
     int ans=0;
     int lp=0,rp=size(height)-1;
     while(lp<rp)
     {
        int w=rp-lp;
        int h=min(height[lp],height[rp]);
        int area=w*h;
        ans=max(ans,area);
                if(height[lp]<height[rp])
            lp++;
        else
        rp--;

     }
     return ans;
        
    }
};