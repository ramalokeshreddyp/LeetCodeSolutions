class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l = 0, r = 0;
        int ans = 0;
        int deleted = 0;
        int res = 0;
        for(r = 0; r<nums.size(); r++) {
            if(nums[r]!=0) {
                ans = ans + 1; 
                res = max(res, ans);
            }
            if(nums[r]==0) {
                deleted++;
            }
            while(deleted>1) {
                if(nums[l]==0) {
                    deleted--;
                } else {
                    ans--;
                }
                l++;
            }
        }
        if(res==nums.size()) {
            return --res;
        }
        return res; 
    }
};