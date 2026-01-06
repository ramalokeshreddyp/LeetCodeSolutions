class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int l=0,r=0,maxl=0,z=0;
       int n=nums.size();
       while(r<n){
        if(nums[r]==0){
            z++;
        }
        while(z>k){
if(nums[l]==0){
    z--;
}
            l++;
        }
if(z<=k){
        maxl=max(maxl,r-l+1);
       }
        r++;
       }
       return maxl;
    }
};