class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
       bool b = true;
        while(b){
            int i = 0;
            for(i = 0; i<nums.size(); i++){
                if(nums[i] == original){ original *= 2; break;}
            }
            if(i == nums.size())
            b = false;
        }
        return original;
    }
};