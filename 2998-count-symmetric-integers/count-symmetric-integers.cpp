class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
      int count = 0;

    for (int num = low; num <= high; ++num) {
        std::string s = std::to_string(num);
        int len = s.length();

        if (len % 2 != 0) continue; 

        int n = len / 2;
        int leftSum = 0, rightSum = 0;

        for (int i = 0; i < n; ++i) {
            leftSum += s[i] - '0';
            rightSum += s[i + n] - '0';
        }

        if (leftSum == rightSum) {
            ++count;
        }
    }

    return count;  
    }
};