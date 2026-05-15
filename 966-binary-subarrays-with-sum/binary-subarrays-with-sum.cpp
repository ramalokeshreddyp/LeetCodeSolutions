class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       int n=nums.size();
       int cnt=0;
      map<int,int>mpp;
      int p=0;
      mpp[0]=1;
      for(int i=0;i<n;i++){
        p+=nums[i];
        int r=p-goal;
        cnt+=mpp[r];
        mpp[p]+=1;
      }
        return cnt;
       
    }
};