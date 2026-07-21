class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mx=0;
        for(auto it:accounts){
            mx=max(mx,accumulate(it.begin(),it.end(),0));
        }
        return mx;
    }
};