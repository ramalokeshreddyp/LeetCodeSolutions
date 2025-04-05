class Solution {
public:
     int dfs(vector<int>& nums, int index, int currentXOR) {
        if (index == nums.size()) {
            return currentXOR;
        }

       
        int include = dfs(nums, index + 1, currentXOR ^ nums[index]);
        
        int exclude = dfs(nums, index + 1, currentXOR);

        return include + exclude;
    }

    int subsetXORSum(vector<int>& nums) {
        return dfs(nums, 0, 0);
    }
};