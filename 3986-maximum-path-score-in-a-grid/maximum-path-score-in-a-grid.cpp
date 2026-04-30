class Solution {
public:
    int maxPathScore(vector<vector<int>>& grid, int k) {
         vector<vector<int>>aux= grid;
        int m = grid.size(), n = grid[0].size(), N = -1e9;
        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(k + 1, N)));
        dp[0][0][0] = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                for (int c = 0; c <= k; c++) {
                    if (dp[i][j][c] == N) continue;
                    int sos = grid[i][j] == 1 ? 1 : (grid[i][j] == 2 ? 2 : 0);
                    int coc = grid[i][j] > 0 ? 1 : 0;
                    if (j + 1 < n && c + coc <= k) dp[i][j + 1][c + coc] = max(dp[i][j + 1][c + coc], dp[i][j][c] + sos);
                    if (i + 1 < m && c + coc <= k) dp[i + 1][j][c + coc] = max(dp[i + 1][j][c + coc], dp[i][j][c] + sos);
                }
            }
        }
        int res = -1;
        for (int c = 0; c <= k; c++) {
            int sos = grid[m - 1][n - 1] == 1 ? 1 : (grid[m - 1][n - 1] == 2 ? 2 : 0);
            int coc = grid[m - 1][n - 1] > 0 ? 1 : 0;
            if (c + coc <= k) res = max(res, dp[m - 1][n - 1][c] + sos);
        }
        return res < 0 ? -1 : res; 
    }
};