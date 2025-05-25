class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
     unordered_map<int,int>mpp;
     for(auto it:nums)   {
        mpp[it]++;
     }
     int res=0;
     for(auto it:mpp){
        if(it.second==2){
            res^=it.first;
        }
     }
     return res;
    }
};