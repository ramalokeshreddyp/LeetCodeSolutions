class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
       int n=nums.size();
       int s=0,d=0;
    for(int i=0;i<n;i++) {
if(nums[i]>=1&&nums[i]<=9){
    s+=nums[i];
}
else{
    d+=nums[i];
}
    }
    if(s>d||d>s){
        return true;
    }
    else{
      return   false;
    }
    }
};