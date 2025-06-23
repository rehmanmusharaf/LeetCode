class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
    vector<int> ans;
    int n=size(nums);
    cout<<"n: "<<n;
    if(n==0||n==1)
    return nums;
    vector<int> prefix(n,0);
    vector<int> suffix(n,0);
    for(int i=0;i<n;i++)
    cout<<prefix[i]<<"---"<<suffix[i]<<endl;
    prefix[0]=1;
    suffix[n-1]=1;
    cout<<"work ";
    for(int i=1;i<n;i++)
    {
        prefix[i]=nums[i-1]*prefix[i-1];
    }
    for(int i=n-2;i>=0;i--)
    {    
        suffix[i]=nums[i+1]*suffix[i+1];
    }
    for(int i=0;i<n;i++)
    {
        cout<<"prefix["<<i<<"]: "<<prefix[i]<<endl;
        cout<<"suffix["<<i<<"]: "<<suffix[i]<<endl;
    }
    for(int i=0;i<n;i++)
    {
        ans.push_back(prefix[i]*suffix[i]);
    }
    return ans;
    }
};