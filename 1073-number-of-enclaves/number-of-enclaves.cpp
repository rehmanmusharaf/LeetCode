class Solution {
public:
    bool isValid(int i, int j, int n, int m, vector<vector<int>>& grid) {
        // Check if the position is within bounds and is land
        return i >= 0 && i < n && j >= 0 && j < m && grid[i][j] == 1;
    }

    void dfsRec(int i, int j, int n, int m, vector<vector<int>>& grid) {
        // Mark the current cell as visited by marking it as 2
        grid[i][j] = 2;

        // Explore all 4 directions
        if (isValid(i + 1, j, n, m, grid)) {
            dfsRec(i + 1, j, n, m, grid);
        }
        if (isValid(i - 1, j, n, m, grid)) {
            dfsRec(i - 1, j, n, m, grid);
        }
        if (isValid(i, j + 1, n, m, grid)) {
            dfsRec(i, j + 1, n, m, grid);
        }
        if (isValid(i, j - 1, n, m, grid)) {
            dfsRec(i, j - 1, n, m, grid);
        }
    }

    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        // Perform DFS for all border cells
        for (int i = 0; i < n; i++) {
            // Check the first column
            if (grid[i][0] == 1) {
                dfsRec(i, 0, n, m, grid);
            }
            // Check the last column
            if (grid[i][m - 1] == 1) {
                dfsRec(i, m - 1, n, m, grid);
            }
        }

        for (int j = 0; j < m; j++) {
            // Check the first row
            if (grid[0][j] == 1) {
                dfsRec(0, j, n, m, grid);
            }
            // Check the last row
            if (grid[n - 1][j] == 1) {
                dfsRec(n - 1, j, n, m, grid);
            }
        }

        int ans = 0;

        // Count the remaining '1's which are enclaves
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    ans++;
                }
            }
        }

        return ans;
    }
};
