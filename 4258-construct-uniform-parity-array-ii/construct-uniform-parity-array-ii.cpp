class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mn = *min_element(nums1.begin(), nums1.end());
        bool odd = false, even = false;

        for (int x : nums1) {
            if (x & 1) odd = true;
            else even = true;
        }

        if (!odd || !even) return true;
        return mn & 1;
    }
};
