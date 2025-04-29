class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
    int n = nums.size();
    int maxElem = *max_element(nums.begin(), nums.end());
    long long ans = 0;
    int count = 0;
    int j = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] == maxElem) {
            count++;
        }
        
        while (count >= k) {
            if (nums[j] == maxElem) {
                count--;
            }
            j++;
        }
        
        ans += j;
    }
    return ans;
}

};