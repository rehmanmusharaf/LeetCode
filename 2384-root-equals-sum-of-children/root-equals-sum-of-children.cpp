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
    bool checkTree(TreeNode* root) {
        if(root==NULL||(root->left==NULL&&root->right==NULL))
        {
            return true;
        }
        int left_sum=0;
        int right_sum=0;
        if(root->left!=NULL)
        {
         left_sum=root->left->val;
        }
        if(root->right!=NULL)
        {
            right_sum=root->right->val;
        }
        if(root->val==left_sum+right_sum&&checkTree(root->left)&&checkTree(root->right))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};