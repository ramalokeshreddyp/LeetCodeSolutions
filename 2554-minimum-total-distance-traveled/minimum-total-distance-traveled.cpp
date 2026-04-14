class Solution {
public:
    long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {
        sort(robot.begin(), robot.end());
        sort(factory.begin(), factory.end());
        
        vector<long long> f;
        for (auto &fac : factory) {
            for (int i = 0; i < fac[1]; i++) {
                f.push_back(fac[0]);
            }
        }
        
        int n = robot.size(), m = f.size();
        const long long INF = 1e18;
        vector<vector<long long>> dp(n + 1, vector<long long>(m + 1, INF));
        
        for (int j = 0; j <= m; j++) dp[0][j] = 0;
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                dp[i][j] = dp[i][j - 1];
                if (dp[i - 1][j - 1] != INF) {
                    dp[i][j] = min(dp[i][j],
                                   dp[i - 1][j - 1] + abs((long long)robot[i - 1] - f[j - 1]));
                }
            }
        }
        
        return dp[n][m];
    }
};