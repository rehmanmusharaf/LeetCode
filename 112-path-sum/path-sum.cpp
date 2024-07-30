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
  bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) {
            return false; // An empty tree has no paths
        }
        
        // If we reach a leaf node, check if the path sum equals the targetSum
        if (root->left == nullptr && root->right == nullptr) {
            return targetSum == root->val;
        }
        
        // Update the targetSum by subtracting the current node's value
        targetSum -= root->val;
        
        // Recursively check the left and right subtrees
        return hasPathSum(root->left, targetSum) || hasPathSum(root->right, targetSum);
    }
};