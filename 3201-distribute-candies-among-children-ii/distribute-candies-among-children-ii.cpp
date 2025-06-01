class Solution {
public:
    long long distributeCandies(int n, int limit) {
      long long res = 0;

    for (int a = 0; a <= std::min(limit, n); ++a) {
        int rem = n - a;
        int min_b = std::max(0, rem - limit);
        int max_b = std::min(limit, rem);
        if (min_b <= max_b) {
            res += (max_b - min_b + 1);
        }
    }

    return res;  
    }
};