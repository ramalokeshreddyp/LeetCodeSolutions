class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     int l=0,cnt=0;
     unordered_set<char>us;
     for(int r=0;r<s.size();r++){
while(us.find(s[r])!=us.end()){
    us.erase(s[l]);
    l++;
}
us.insert(s[r]);
cnt=max(cnt,r-l+1);
     }
     return cnt;
    }
};