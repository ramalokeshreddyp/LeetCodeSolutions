class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int pos=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=target){
                pos=i;
                break;
            }
        }
        if(pos==-1){
            return nums.size();
        }
        return pos;
    }
};