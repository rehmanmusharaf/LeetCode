class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int ans=0;
        int count=0;
        string subs="";
        if(s.length()==0)
        return ans;
        for(int i=0;i<s.length();i++)
        {
            bool exist=false;
            for(int j=0;j<subs.length();j++)
            {
                if(subs[j]==s[i])
                exist=true;
            }
            if(!exist)
            {
            subs+=s[i];
            count++;
            if(count>ans)
            ans=count;
            }
            else if(exist)
            {
                cout<<"subs is: "<<subs<<endl;
                for(int k=i-1;k>=0;k--)
                {
                    if(s[k]==s[i])
                    {
                    i=k+1;
                    break;
                    }
                }
                count=1;
                subs=s[i];
            }
        }
        return ans;    
    }
};