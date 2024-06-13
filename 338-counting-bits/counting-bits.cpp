class Solution {
public:
  string toBinary(int n) {
    string binary = "";
    while (n > 0) {
        binary = (n % 2 == 0 ? "0" : "1") + binary;
        n /= 2;
    }
    return binary;
    }

    vector<int> countBits(int n) 
    {
    vector<int> ans;
    for(int i=0;i<=n;i++)
    {
        string binary=toBinary(i);
        int num=0;
        for(int j=0;j<binary.length();j++)
        {
            if(binary[j]=='1')
            {
                // cout<<"if Condition RUn!";
                num++;
            }
            // num=0;
        }
            ans.push_back(num);
    }
    return ans;

    }
};