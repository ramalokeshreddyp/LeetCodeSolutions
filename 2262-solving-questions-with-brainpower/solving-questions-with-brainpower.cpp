class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
         int n = questions.size();
    vector<long long> dp(n + 1, 0);
    
    for (int i = n - 1; i >= 0; --i) {
        int points = questions[i][0], brainpower = questions[i][1];
        int next_index = i + brainpower + 1;
        long long solve = points + (next_index < n ? dp[next_index] : 0);
        dp[i] = max(solve, dp[i + 1]);
    }
    
    return dp[0];
    }
};