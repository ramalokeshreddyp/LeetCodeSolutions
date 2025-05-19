class Solution {
public:
   int countPrimeSetBits(int left, int right) {
    int cnt = 0;
    for (int i = left; i <= right; i++) {
        int sb = __builtin_popcount(i), key = 1;
        if (sb == 1) key = 0; 
        for (int k = 2; k * k <= sb; k++) {
            if (sb % k == 0) {
                key = 0;
                break;
            }
        }
        if (key) {
            cnt++;
        }
    }
    return cnt;
}

};