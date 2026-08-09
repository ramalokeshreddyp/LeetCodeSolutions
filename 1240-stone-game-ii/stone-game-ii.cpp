class Solution {
public:
    int stoneGameII(vector<int>& p) {
        int n = p.size();
        vector<int> s(n + 1);
        for (int i = n - 1; i >= 0; --i)
            s[i] = s[i + 1] + p[i];

        vector<vector<int>> dp(n, vector<int>(n + 1));

        for (int i = n - 1; i >= 0; --i) {
            for (int m = 1; m <= n; ++m) {
                if (i + 2 * m >= n) {
                    dp[i][m] = s[i];
                    continue;
                }
                for (int x = 1; x <= 2 * m; ++x)
                    dp[i][m] = max(dp[i][m], s[i] - dp[i + x][max(m, x)]);
            }
        }

        return dp[0][1];
    }
};
