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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        if(root==NULL)
        return ans;
        while(1)
        {
            int size=q.size();
            if(size==0)
            {
              reverse(ans.begin(), ans.end());

            return ans;
            }
            vector<int> data;
            while(size>0)
            {
            TreeNode* temp=q.front();
            data.push_back(temp->val);
            q.pop();
            if(temp->left!=NULL)
            q.push(temp->left);
            if(temp->right!=NULL)
            q.push(temp->right);
            size--;
            }
            cout<<"size of ans: "<<ans.size()<<endl;
           

            ans.push_back(data);
            // return ans;
        }
              reverse(ans.begin(), ans.end());
        return ans;
    }
};