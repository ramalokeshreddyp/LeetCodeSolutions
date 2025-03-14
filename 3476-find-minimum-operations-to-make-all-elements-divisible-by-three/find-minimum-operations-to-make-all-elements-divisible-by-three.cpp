class Solution {
public:
    int minimumOperations(vector<int>& nums) {
      int n=nums.size();
      int cnt=0;
      for(int i=0;i<n;i++)  {
        int rem=nums[i]%3;
if(rem==0){
    continue;
}
else{
    cnt+=min(3-rem,rem);
}
      }
      return cnt;
    }
};