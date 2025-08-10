class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        multimap<int,int> mp;
    int n = mat.size(), m = mat[0].size();
    for (int i = 0; i < n; i++) {
        int cnt = accumulate(mat[i].begin(), mat[i].end(), 0);
        mp.insert({cnt, i});
    }
    vector<int> res;
    for (auto &p : mp) {
        if (k-- > 0) res.push_back(p.second);
        else break;
    }
    return res;
    }
};