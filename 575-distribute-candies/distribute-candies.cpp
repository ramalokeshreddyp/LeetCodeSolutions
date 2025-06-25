class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> unique(candyType.begin(), candyType.end());
        int uniqueTypes = unique.size();
        int n = candyType.size();
        int low = 0, high = n / 2;
        int ans = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (mid <= uniqueTypes) {
                ans = mid;     
                low = mid + 1;
            } else {
                high = mid - 1; 
            }
        }

        return ans;
    }
};