#include <unordered_map> 
using namespace std;
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> result;
        unordered_map<int,int> umap;
        for(int i=0;i<size(arr1);i++)
        {
            umap[arr1[i]]++;
        }
        for(int i=0;i<size(arr2);i++)
        {
         auto it = umap.find(arr2[i]);
        //  cout<<"iterator is:"<<it;
         for(int j=0;j<it->second;j++)
         {
            result.push_back(it->first);
         }
        umap.erase(it->first);
        }
        if(umap.empty())
        return result;
        while(!umap.empty())
        {
        auto it=umap.begin();
        int smallval=it->first;
        int count=it->second;
        for(auto it2:umap)
        {
            if(smallval>it2.first)
            {
                smallval=it2.first;
                count=it2.second;
            }
        }
        for(int i=0;i<count;i++)
        {
            result.push_back(smallval);
        }
        umap.erase(smallval);
        }
        return result;
    }
};