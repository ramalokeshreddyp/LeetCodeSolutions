class Solution {
public:
    int maxProfit(vector<int>& nums) {
      int result=0;
     int n=nums.size();
   int xmin=nums[0];
   for(int i=1;i<n;i++){
    
    if(nums[i]<=xmin){
        xmin=nums[i];
    }
    else{
        result=max(result,nums[i]-xmin);
    }
   }
    return result;   
    }
};