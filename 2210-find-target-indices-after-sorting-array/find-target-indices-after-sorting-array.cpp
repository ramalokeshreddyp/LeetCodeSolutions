class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
     vector<int> res;
    sort(nums.begin(), nums.end());
    auto it = lower_bound(nums.begin(), nums.end(), target);
    if (it == nums.end() || *it != target) {
        return res;
    }
    int in1 = distance(nums.begin(), it);
    while (in1 < nums.size() && nums[in1] == target) {
        res.push_back(in1);
        in1++;
    }
    return res;
    }
};