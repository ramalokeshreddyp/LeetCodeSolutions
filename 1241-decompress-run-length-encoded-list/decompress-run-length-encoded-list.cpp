class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>res;
        for(int i=0;i<nums.size()-1;i++){
vector<int>v(nums[i],nums[i+1]);
res.insert(res.end(),v.begin(),v.end());
            i++;
        }
        return res;
    }
};