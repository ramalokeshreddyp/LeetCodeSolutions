class Solution {
public:
    int maxDifference(string s) {
      unordered_map<char,int>mpp;
      for(auto it:s)  {
        mpp[it]++;
      }
      int mn=INT_MAX,mx=INT_MIN;
      for(auto it:mpp){
        if(it.second%2==0){
            mn=min(mn,it.second);
        }
        else{
            mx=max(mx,it.second);
        }
      }
      return mx-mn;
    }
};