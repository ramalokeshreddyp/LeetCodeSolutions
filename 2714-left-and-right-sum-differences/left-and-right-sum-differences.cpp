class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
      int n=nums.size();
        vector<int>res;
        int rightsum=accumulate(nums.begin(),nums.end(),0);
        int leftsum=0;
        for(auto it:nums){
            rightsum-=it;
            res.push_back(abs(leftsum-rightsum));
            leftsum+=it;
        }
        return res;
    }
};