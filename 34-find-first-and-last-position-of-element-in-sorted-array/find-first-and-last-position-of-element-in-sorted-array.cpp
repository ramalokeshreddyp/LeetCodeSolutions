class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    auto it = lower_bound(nums.begin(), nums.end(), target);
    if (it == nums.end() || *it != target) {
        return {-1, -1};
    }
    int in1 = distance(nums.begin(), it);
    auto it2 = upper_bound(nums.begin(), nums.end(), target);
    --it2;
    int in2 = distance(nums.begin(), it2);
    return {in1, in2};
}

};