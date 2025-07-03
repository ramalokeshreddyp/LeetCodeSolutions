class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int>us(nums.begin(),nums.end());
        while(us.find(original)!=us.end()){
            original*=2;
        }
        return original;
    }
};