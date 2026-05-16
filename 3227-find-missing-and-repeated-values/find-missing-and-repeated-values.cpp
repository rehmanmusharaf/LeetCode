class Solution {
public:
vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    set<int> st;
    vector<int> ans;

    int n = grid.size();

    // Find repeated value
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < grid[i].size(); j++) {

            if (st.find(grid[i][j]) != st.end()) {
                ans.push_back(grid[i][j]); // repeated
            } else {
                st.insert(grid[i][j]);
            }
        }
    }

    // Find missing value
    auto it = st.begin();
    int expected = 1;

    for (; it != st.end(); ++it) {

        if (*it != expected) {
            ans.push_back(expected); // missing
            break;
        }

        expected++;
    }

    // If missing number is the last one
    if (ans.size() == 1) {
        ans.push_back(st.size() + 1);
    }

    return ans;
}};