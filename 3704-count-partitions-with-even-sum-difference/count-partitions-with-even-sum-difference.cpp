class Solution {
public:
    int countPartitions(vector<int>& nums) {
       int cnt=0,csum=0;
       int tot=std::accumulate(nums.begin(),nums.end(),0);
       for(int i=0;i<nums.size()-1;i++){
        csum+=nums[i];
        int sum=tot-csum;
        if(abs(sum-csum)%2==0){
            cnt++;
        }
       }
       return cnt;
    }
};