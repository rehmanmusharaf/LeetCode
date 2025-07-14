class Solution {
public:
    bool isPalindrome(string s) {
    int start=0,end=size(s)-1;
    while(start<=end)
    {
        if(isalnum(s[start])&&isalnum(s[end]))
        {
        if(tolower(s[start])==tolower(s[end]))
        {
            start++;
            end--;
        continue;

        }
        else
        return false;
        }
        else
        {
            if(!isalnum(s[start]))
            {

                start++;
            }
            if(!isalnum(s[end]))
            {

                end--;
            }
        }
    }
    return true;
    }
};