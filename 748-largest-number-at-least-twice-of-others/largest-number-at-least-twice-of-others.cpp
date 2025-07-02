class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        auto it=max_element(nums.begin(),nums.end());
        int inx=it-nums.begin();
      int maxi=*it;
      nums.erase(it);
      for(int i=0;i<nums.size();i++){
        if(2*nums[i]>maxi){
            return -1;
        }
      }
return inx;
    }
};