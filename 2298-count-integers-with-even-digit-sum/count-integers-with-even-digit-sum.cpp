class Solution {
public:
    int countEven(int num) {
       int count = 0;

        for (int i = 1; i <= num; ++i) {
            int x = i, sum = 0;

            
            if (x >= 1000) sum = x / 1000 + (x / 100) % 10 + (x / 10) % 10 + x % 10;
            else if (x >= 100) sum = (x / 100) + (x / 10) % 10 + x % 10;
            else if (x >= 10) sum = (x / 10) + x % 10;
            else sum = x;

            if (sum % 2 == 0) ++count;
        }

        return count; 
    }
};