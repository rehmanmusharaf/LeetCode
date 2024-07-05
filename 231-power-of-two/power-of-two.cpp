class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1)
        return true;
        else if(n==0)
        return false;
        if(n%2==0)
        {
        bool boolcheck=isPowerOfTwo(n/2);
        if(boolcheck)
        return true;
        else
        return false;
        }
        else 
        return false;
        // if(n%2==1)
        // return false;
        // return isPowerOfTwo(n/2);
         }
};
