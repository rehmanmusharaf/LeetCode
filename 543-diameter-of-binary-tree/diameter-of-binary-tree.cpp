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
int res=0;
    int height(TreeNode* root)
    {
    if(root==NULL)
    return 0;
    int lh=height(root->left);
    int lr=height(root->right);
    res=max(res,1+lh+lr);
    return max(lh,lr)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) 
    {
    int result=height(root);
    return res-1;   
    }
};