class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), greater<int>()); 

    if (*min_element(nums.begin(), nums.end()) < k) return -1; 

    unordered_set<int> seen;
    int ops = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > k && seen.find(nums[i]) == seen.end()) {
            seen.insert(nums[i]);
            ops++;
        }
    }

    return ops;
    }
};