class Solution {
public:
    int findMaxK(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        sort(nums.begin(),nums.end(),greater<int>());
        for(int i=0;i<nums.size();i++){
            if(s.find(-nums[i])!=s.end()){
                return nums[i];
            }
        }
        return -1;
    }
};