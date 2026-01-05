class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=0,maxl=0;
        while(r<n){
            if(nums[r]==0){
                l=r+1;
            }
            maxl=max(maxl,r-l+1);
            r++;
        }
        return maxl;
    }
};