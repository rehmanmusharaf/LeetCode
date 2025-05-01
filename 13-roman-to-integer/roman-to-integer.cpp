#include<unordered_map>

class Solution {
public:
    int romanToInt(string s) {
     unordered_map<char,int> um={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
     int ans=0;
     if(s=="")
     return -1;
     int n=s.length();
     for(int i=0;i<n;i++)    
     {
            int curr = um[s[i]];
            int next = (i + 1 < n) ? um[s[i + 1]] : 0;

            if (curr < next) {
                ans -= curr;  // Subtract if current is less than next
            } else {
                ans += curr;  // Otherwise add
            }
     }
     return ans;
    }
};