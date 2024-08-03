using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* helper(vector<int>& nums,int start,int end)
    {
        if(start>end)
        return NULL;
        int mid=(start+end)/2;
        TreeNode* root=new TreeNode(nums[mid]);
        root->left=helper(nums,start,mid-1);
        root->right=helper(nums,mid+1,end);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
    if(size(nums)==0)
        return NULL;
    if(size(nums)==1)
    {
        TreeNode* root=new TreeNode(nums[0]);
        return root;
    }
    TreeNode* root=helper(nums,0,size(nums)-1);
    return root;
    }
};