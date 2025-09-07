class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> arr(n);
        int idx = 0;
        for (int i = 1; i <= n/2; ++i) {
            arr[idx++] = i;
            arr[idx++] = -i;
        }
        return arr;
    }
};