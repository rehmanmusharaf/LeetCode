#include <vector>
#include <string>

using namespace std;
class Solution {
public:
    void dfs(TreeNode* root, string path, vector<string>& paths) {
        if (root == nullptr) {
            return;
        }

        // Append the current node's value to the path
        if (!path.empty()) {
            path += "->";
        }
        path += to_string(root->val);

        // If it's a leaf node, add the path to the result
        if (root->left == nullptr && root->right == nullptr) {
            paths.push_back(path);
        } else {
            // Continue to traverse the tree
            if (root->left != nullptr) {
                dfs(root->left, path, paths);
            }
            if (root->right != nullptr) {
                dfs(root->right, path, paths);
            }
        }
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        if (root != nullptr) {
            dfs(root, "", paths);
        }
        return paths;
    }
};
