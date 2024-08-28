class Solution {
public:
    // Function to find and delete the maximum value in a given row `x`
    int findMax(vector<vector<int>>& grid, int x) {
        int maxVal = 0;
        int maxIndex = -1;
        for (int i = 0; i < grid[x].size(); i++) {
            if (grid[x][i] > maxVal) {
                maxVal = grid[x][i];
                maxIndex = i;
            }
        }
        // Mark the deleted value
        if (maxIndex != -1) {
            grid[x][maxIndex] = -1; // Or any value to mark as removed
        }
        return maxVal;
    }

    int deleteGreatestValue(vector<vector<int>>& grid) {
        int ans = 0;
        int m = grid.size();    // Number of rows
        int n = grid[0].size(); // Number of columns

        // Perform the operations until the grid becomes empty (all columns removed)
        while (n > 0) {
            int roundMax = 0; // Store the max value found in each iteration
            for (int i = 0; i < m; i++) {
                int maxValue = findMax(grid, i);
                roundMax = max(roundMax, maxValue);
            }
            ans += roundMax; // Add the maximum of this round to the answer
            n--; // Reduce the number of columns left to process
        }

        return ans;
    }
};
