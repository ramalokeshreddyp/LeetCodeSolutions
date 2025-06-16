class Solution {
public:
    int maximumDifference(vector<int>& nums) {
     int result=-1;
     int n=nums.size();
   int xmin=nums[0];
   for(int i=1;i<n;i++){
    
    if(nums[i]<=xmin){
        xmin=nums[i];
    }
    else{
        result=max(result,abs(xmin-nums[i]));
    }
   }
    return result;
    }
};