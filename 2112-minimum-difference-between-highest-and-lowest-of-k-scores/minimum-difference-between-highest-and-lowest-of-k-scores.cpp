class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
sort(nums.begin(), nums.end());
    int minDiff = INT_MAX;
    for (int i = 0; i <= nums.size() - k; ++i) {
        int diff = nums[i + k - 1] - nums[i];
        minDiff = min(minDiff, diff);
    }
    return minDiff;
    }
};