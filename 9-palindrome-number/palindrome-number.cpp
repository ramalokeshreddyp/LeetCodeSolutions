class Solution {
public:
    bool isPalindrome(int x) {
        long long  num=x;
        long long  rev=0;
        if(num>0){
        while(num!=0){
long long  rem=num%10;
rev=rev*10+rem;
num/=10;
        }
        }
        if(rev==x){
            return true;
        }
        else{
            return false;
        }
    }
};