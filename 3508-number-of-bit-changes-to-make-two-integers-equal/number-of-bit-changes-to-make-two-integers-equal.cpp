class Solution {
public:
    int minChanges(int n, int k) {
        if (k > n || (n | k) != n) return -1;  
    return __builtin_popcount(n) - __builtin_popcount(k);
    
    }
};