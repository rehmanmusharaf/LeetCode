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
      int minDepth(TreeNode* root) {
        if (root == NULL) return 0;

        queue<TreeNode*> q;
        q.push(root);
        int count = 1;

        while (!q.empty()) {
            int levelSize = q.size();
            for (int i = 0; i < levelSize; ++i) {
                TreeNode* n = q.front();
                q.pop();

                if (n->left == NULL && n->right == NULL) {
                    return count;
                }

                if (n->left != NULL) {
                    q.push(n->left);
                }

                if (n->right != NULL) {
                    q.push(n->right);
                }
            }
            count++;
        }

        return count;
    }
};