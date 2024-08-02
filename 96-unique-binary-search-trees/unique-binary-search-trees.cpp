class Solution {
public:
    int numTrees(int n) {
        if (n == 0) return 1;  // Edge case: there's exactly one BST with 0 nodes (empty tree)
        
        vector<int> dp(n + 1, 0);
        dp[0] = 1;  // Base case: 1 way to form a BST with 0 nodes
        dp[1] = 1;  // Base case: 1 way to form a BST with 1 node
        
        for (int i = 2; i <= n; ++i) {
            for (int j = 1; j <= i; ++j) {
                dp[i] += dp[j - 1] * dp[i - j];
            }
        }
        
        return dp[n];
    }
};
