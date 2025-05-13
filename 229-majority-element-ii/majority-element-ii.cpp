class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
      unordered_map<int,int>mpp;
      for(auto it:nums)  {
        mpp[it]++;
      }
      vector<int>res;
      for(auto it:mpp){
        if(it.second>n/3){
            res.push_back(it.first);
        }
      }
      return res;
    }
};