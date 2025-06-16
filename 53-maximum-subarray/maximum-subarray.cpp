class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      
        long long csum=0,msum=nums[0];
        for(int i=0;i<nums.size();i++){
            if(csum<0){
                csum=0;

            }
        
 
            csum+=nums[i];
    
            msum=max(msum,csum);
        }
        return msum;
    }
};