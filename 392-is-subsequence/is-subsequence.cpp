class Solution {
public:
    bool isSubsequence(string s, string t) {
    int left=0;
    int right=t.length();
    int ans=0;
    int j=0;
    for( int i=0;i<t.length();i++)
    {
        if(s[j]==t[i])
        {
                ans++;
                j++;
        }
    }
    cout<<"ans is: "<<ans<<" t.length is: "<<t.length();
    return ans==s.length();    
    }
};