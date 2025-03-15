class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
       int n = score.size();
    vector<int> scores = score;  
    sort(scores.begin(), scores.end(), greater<int>());  

    unordered_map<int, string> rankMap;
    for (int i = 0; i < n; i++) {
        if (i == 0) rankMap[scores[i]] = "Gold Medal";
        else if (i == 1) rankMap[scores[i]] = "Silver Medal";
        else if (i == 2) rankMap[scores[i]] = "Bronze Medal";
        else rankMap[scores[i]] = to_string(i + 1);
    }

    vector<string> res;
    for (int i = 0; i < n; i++) {
        res.push_back(rankMap[score[i]]);
    }
    
    return res;
    }
};