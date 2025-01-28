class Solution {
public:
    int n, m;
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};

    int dfs(int i, int j, vector<vector<int>>& g) {
        // Check for out-of-bounds or water cell
        if (i < 0 || i >= n || j < 0 || j >= m || g[i][j] == 0) return 0;

        int ans = g[i][j];
        g[i][j] = 0; // Mark as visited

        for (int k = 0; k < 4; k++) {
            int newX = i + dx[k];
            int newY = j + dy[k];
            ans += dfs(newX, newY, g);
        }
        return ans;
    }
    int findMaxFish(vector<vector<int>>& grid) {
        int ans = 0;
         n = grid.size(); m=grid[0].size();
         int curr = 0;

         for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                curr = 0;
                ans = max(ans, dfs(i,j,grid));
            }
         }
        return ans;
    }
};