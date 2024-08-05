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
    void inordertraversal(TreeNode* root, int k,int &count,bool &check,int &ans)
    {
    if(root->left!=NULL)
    inordertraversal(root->left,k,count,check,ans);
    count++;
    if(k==count)
    {
    ans=root->val;
    return;
    }
    if(root->right!=NULL)
    inordertraversal(root->right,k,count,check,ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        int count=0;
        bool check=false;
        int ans;
        inordertraversal(root,k,count,check,ans);
        // return count;
        return ans;
    }
};