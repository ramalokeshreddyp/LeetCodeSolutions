class Solution {
public:
    vector<int> partitionLabels(string s) {
       vector<int> v;
    int i = 0;

    while (i < s.length()) {
        int lastIdx = s.rfind(s[i]);
        for (int j = i + 1; j < lastIdx; j++) {
            lastIdx = max(lastIdx, (int)s.rfind(s[j]));
        }
        v.push_back(lastIdx - i + 1);
        i = lastIdx + 1;
    }

    return v;
    }
};