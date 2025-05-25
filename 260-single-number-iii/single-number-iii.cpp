class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
    unordered_map<int, int> freq;
    for (int num : nums) {
        freq[num]++;
    }

    auto it = stable_partition(nums.begin(), nums.end(), [&](int x) {
        return freq[x] == 1;
    });

    return vector<int>(nums.begin(), it);
}

};