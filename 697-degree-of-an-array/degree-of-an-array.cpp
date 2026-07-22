class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
      int n=nums.size();
      int mx=0;
      unordered_map<int,int>mpp;
   for(int i=0;i<n;i++){
    mpp[nums[i]]++;
    mx=max(mx,mpp[nums[i]]);
   }
   int cnt=INT_MAX;
for(int i=0;i<n;i++){
    if(mpp[nums[i]]==mx)
    {
        for(int j=n-1;j>=0;j--){
            if(nums[j]==nums[i]){
                cnt=min(cnt,j-i+1);
                break;
            }
        }
         mpp[nums[i]] = 0;
    }
}
return cnt;
    }
};