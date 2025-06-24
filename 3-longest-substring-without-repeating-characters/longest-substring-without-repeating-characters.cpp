class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     unordered_set<char>us;
     int l=0,r=0,maxlen=0;
     while(r<s.size()){
        if(us.find(s[r])==us.end()){
            us.insert(s[r]);
            r++;
            maxlen=max(maxlen,r-l);
        }
        else{
            us.erase(s[l]);
            l++;
        }
     }
     return maxlen;
    }
};