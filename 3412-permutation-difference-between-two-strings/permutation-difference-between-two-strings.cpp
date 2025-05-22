class Solution {
public:
    int findPermutationDifference(string s, string t) {
      unordered_map<char,int>mpp;
      for(int i=0;i<t.size();i++){
        mpp[t[i]]=i;
      }
      int asum=0;
      for(int i=0;i<s.size();i++){
        asum+=abs(i-mpp[s[i]]);
      }
      return asum;
    }
    
};