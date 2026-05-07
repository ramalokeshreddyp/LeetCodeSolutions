class Solution {
public:
    vector<int> maxValue(vector<int>& nums) {
        int n = nums.size();
        vector<int> pref(n), suff(n), ans(n);

        pref[0] = nums[0];
        for (int i = 1; i < n; ++i)
            pref[i] = max(pref[i - 1], nums[i]);

        suff[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; --i)
            suff[i] = min(suff[i + 1], nums[i]);

        int l = 0, mx = nums[0];

        for (int i = 0; i < n - 1; ++i) {
            mx = max(mx, nums[i]);

            if (pref[i] <= suff[i + 1]) {   // FIX HERE
                for (int j = l; j <= i; ++j)
                    ans[j] = mx;

                l = i + 1;
                mx = nums[l];
            }
        }

        mx = *max_element(nums.begin() + l, nums.end());

        for (int j = l; j < n; ++j)
            ans[j] = mx;

        return ans;
    }
};