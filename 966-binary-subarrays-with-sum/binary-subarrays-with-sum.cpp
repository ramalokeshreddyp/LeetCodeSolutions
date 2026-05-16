class Solution {
public:
int func(vector<int>&a,int k){
    if(k<0){
        return 0;
    }
    int n=a.size();
    int l=0,r=0,sum=0,cnt=0;
    while(r<n){
        sum+=a[r];
        while(sum>k){
            sum-=a[l];
            l++;
        }
        cnt=cnt+(r-l+1);
        r++;
    }
    return cnt;
}
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       return func(nums,goal)-func(nums,goal-1);
    }
};