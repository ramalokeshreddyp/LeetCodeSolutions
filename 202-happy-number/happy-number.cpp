class Solution {
public:
    bool isHappy(int n) {
       int slow = n, fast = n;

    do {
        slow = sumOfSquares(slow);         
        fast = sumOfSquares(sumOfSquares(fast));  
    } while (slow != fast);

    return (slow == 1);
    }
    int sumOfSquares(int n) {
    int sum = 0;
    while (n > 0) {
        int rem = n % 10;
        sum += rem * rem;
        n /= 10;
    }
    return sum;
}
};