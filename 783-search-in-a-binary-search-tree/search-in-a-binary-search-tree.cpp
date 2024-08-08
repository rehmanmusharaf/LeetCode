#include<queue>
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
    TreeNode* searchBST(TreeNode* root, int val) {
    if(root==NULL)
    return root;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty())
    {
    TreeNode* n=q.front();
    q.pop();
    if(n->val==val)
    return n;
    if(n->left!=NULL)
    q.push(n->left);
    if(n->right!=NULL)
    q.push(n->right);
    }   
    return NULL;
    }
};