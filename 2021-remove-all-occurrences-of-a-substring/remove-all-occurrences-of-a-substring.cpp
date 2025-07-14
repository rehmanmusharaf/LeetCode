class Solution {
public:
    string removeOccurrences(string s, string part) {
    int SSLength=size(part);
    while(size(s)>0&&s.find(part)<size(s))
    {  
        s.erase(s.find(part),size(part));
    }
    return s;
    }
};