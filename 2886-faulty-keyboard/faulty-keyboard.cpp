class Solution {
public:
    string finalString(string s) {
        int n = s.length();
        string ans;
        for(int i = 0; i < n; i++){
            if(s[i] == 'i') reverse(ans.begin() , ans.end());
            else ans += s[i];
        }
        return ans;
    }
};