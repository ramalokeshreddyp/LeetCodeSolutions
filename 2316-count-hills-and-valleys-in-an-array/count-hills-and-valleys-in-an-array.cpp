class Solution {
public:
    int countHillValley(vector<int>& nums) {
        auto it=unique(nums.begin(),nums.end());
        nums.erase(it,nums.end());
        int n=nums.size(),cnt=0;
        for(int i=1;i<n-1;i++){
            if(nums[i]>nums[i-1]&&nums[i]>nums[i+1]){
                cnt++;
            }
            else if(nums[i]<nums[i-1]&&nums[i]<nums[i+1]){
                cnt++;
            }
        }
        return cnt;
    }
};