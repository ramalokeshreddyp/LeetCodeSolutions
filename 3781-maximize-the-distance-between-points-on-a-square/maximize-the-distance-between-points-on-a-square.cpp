#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxDistance(int side, vector<vector<int>>& points, int k) {
        vector<long long> linear;
        for (const auto& p : points) {
            int x = p[0], y = p[1];
            if (y == 0) linear.push_back(x);
            else if (x == side) linear.push_back(side + y);
            else if (y == side) linear.push_back(2LL * side + (side - x));
            else linear.push_back(3LL * side + (side - y));
        }

        sort(linear.begin(), linear.end());
        int n = linear.size();
        long long totalPerimeter = 4LL * side;

        auto check = [&](int mid) {
            for (int i = 0; i < n; ++i) {
                if (linear[i] > linear[0] + mid) break; 
                
                int count = 1;
                long long last = linear[i];
                for (int j = i + 1; j < n; ++j) {
                    if (linear[j] - last >= mid) {
                        count++;
                        last = linear[j];
                    }
                    if (count == k) break;
                }
                
                if (count == k && (totalPerimeter - (last - linear[i])) >= mid) {
                    return true;
                }
            }
            return false;
        };

        int low = 1, high = totalPerimeter / k, ans = 0;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (check(mid)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
};