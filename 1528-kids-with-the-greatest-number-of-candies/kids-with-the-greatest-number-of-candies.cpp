class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result(size(candies),false);
        int largestcandies=0;
        for(int i=0;i<size(candies);i++)
        {
            if(largestcandies<candies[i])
            {
                largestcandies=candies[i];
            }
        }
        for(int i=0;i<size(candies);i++)
        {
        if(candies[i]+extraCandies>=largestcandies)
            {
                result[i]=true;
            }
        }
        return result;
    }
};