class Solution {
public:
    bool isPalindrome(const string& s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right])
                return false;
            left++;
            right--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int low = 0, high = s.size() - 1;

        while (low < high) {
            if (s[low] == s[high]) {
                low++;
                high--;
            } else {
               
                return isPalindrome(s, low + 1, high) || isPalindrome(s, low, high - 1);
            }
        }
        return true;
    }
};
