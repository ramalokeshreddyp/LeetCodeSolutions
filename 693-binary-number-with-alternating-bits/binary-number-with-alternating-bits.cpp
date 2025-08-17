class Solution {
public:
    bool hasAlternatingBits(int n) {
        bitset<32> b(n);
        unsigned long x = b.to_ulong();
        int last = (x > 0) ? 31 - __builtin_clz(x) : -1;

        for (int i = 0; i < last; i++) {
            if (b[i] == b[i + 1]) return false;
        }
        return true;
    }
};
