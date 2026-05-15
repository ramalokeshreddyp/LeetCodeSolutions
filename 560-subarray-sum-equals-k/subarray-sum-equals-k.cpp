class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>mpp;
        mpp[0]=1;
        int p=0,cnt=0;
        for(int i=0;i<n;i++){
            p+=nums[i];
            int r=p-k;
            cnt+=mpp[r];
            mpp[p]+=1;
        }
        return cnt;
    }
};