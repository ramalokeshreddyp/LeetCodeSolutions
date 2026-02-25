class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>res;
        for(auto it:arr){
            res.push_back({__builtin_popcount(it),it});
            
        }
        sort(res.begin(),res.end());
        vector<int>ans;
        for(auto it:res){
            ans.push_back(it.second);
        }
        return ans;
        
    }
};