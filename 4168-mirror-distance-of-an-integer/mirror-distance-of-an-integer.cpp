class Solution {
public:
int reverse(int n){
    int num=0;
    while(n>0){
        int rem=n%10;
        num=num*10+rem;
        n/=10;
    }
    return num;
}
    int mirrorDistance(int n) {
        return abs(n-reverse(n));
    }
};