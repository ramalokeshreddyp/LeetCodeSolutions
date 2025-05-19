class Solution {
public:
   int countPrimeSetBits(int left, int right) {
    int cnt = 0;
    unordered_set<int> primes = {2, 3, 5, 7, 11, 13, 17, 19};
    
    for (int i = left; i <= right; ++i) {
        int bits = __builtin_popcount(i);
        if (primes.count(bits)) {
            cnt++;
        }
    }
    return cnt;
}

};