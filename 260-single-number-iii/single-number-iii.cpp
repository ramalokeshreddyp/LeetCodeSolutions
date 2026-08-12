class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        vector<int>res;
        for(auto it:mpp){
            if(it.second==1){
                res.push_back(it.first);
            }
            if(res.size()==2){
                break;
            }
        }
        return res;
    }
};