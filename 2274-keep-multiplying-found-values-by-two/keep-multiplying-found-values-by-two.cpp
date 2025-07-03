class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_map<int,int>mpp;
        for(auto it:nums){
            mpp[it]++;
        }
       while(mpp[original]>0){
original*=2;
       }
        return original;
    }
};