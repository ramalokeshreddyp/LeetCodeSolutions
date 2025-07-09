class Solution {
public:
    int splitNum(int num) {
        vector<int> count(10, 0);
        while (num > 0) {
            count[num % 10]++;
            num /= 10;
        }

        int num1 = 0, num2 = 0;
        bool turn = true;

        for (int digit = 0; digit <= 9; ++digit) {
            while (count[digit] > 0) {
                if (turn)
                    num1 = num1 * 10 + digit;
                else
                    num2 = num2 * 10 + digit;
                count[digit]--;
                turn = !turn;
            }
        }

        return num1 + num2;
    }
};
