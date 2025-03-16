class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        vector<unordered_map<int, int>> playerColors(n);
    
    for (auto& p : pick) {
        int player = p[0];
        int color = p[1];
        playerColors[player][color]++;
    }

    int winners = 0;
    for (int i = 0; i < n; i++) {
        for (auto& entry : playerColors[i]) {
            if (entry.second > i) {
                winners++;
                break;
            }
        }
    }
    return winners;
    }
};