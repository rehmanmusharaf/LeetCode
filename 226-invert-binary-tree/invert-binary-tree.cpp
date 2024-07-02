#include <queue>
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
    TreeNode* invertTree(TreeNode* root) 
    {
        if(root==NULL)
        return root;
        if(root->left==NULL&&root->right==NULL)
        return root;
        TreeNode* root2=root;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        TreeNode* root3=root;
        while(!q.empty())
        {
        TreeNode* n=q.front();
        q.pop();

        if(n!=NULL)
        {
           TreeNode* temp = n->left;
            n->left = n->right;
            n->right = temp;
        if(n->right!=NULL)
        {
        q.push(n->right);
        // root3->left=n->right;
        }
        if(n->left!=NULL)
        {
        q.push(n->left);
        // root3->right=n->left;
        }
        // root3=root3->right;
        }
        else if(!q.empty())
        {
         q.push(NULL);
        }
        }
        return root;
    }
};