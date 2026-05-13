class Solution {
public:
    int minMoves(vector<int>& nums, int limit) {
        int n = nums.size();
        vector<int> diff(2 * limit + 2);

        for (int i = 0; i < n / 2; ++i) {
            int a = nums[i];
            int b = nums[n - 1 - i];

            int l = min(a, b) + 1;
            int r = max(a, b) + limit;
            int s = a + b;

            diff[2] += 2;
            diff[l] -= 1;
            diff[s] -= 1;
            diff[s + 1] += 1;
            diff[r + 1] += 1;
        }

        int ans = INT_MAX, cur = 0;

        for (int x = 2; x <= 2 * limit; ++x) {
            cur += diff[x];
            ans = min(ans, cur);
        }

        return ans;
    }
};