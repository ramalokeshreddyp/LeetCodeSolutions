class Solution {
public:
    int reverse(int x) {
        long  num=x;
        long  rev=0;
        if(num>0){
        while(num!=0){
            long  rem=num%10;
            rev=rev*10+rem;
            num/=10;
        }
        if(rev<-2147483648||rev>2147483647){
            return 0;
        }
        return rev;
        }
        else{
            num=-(num);
                      while(num!=0){
            long  rem=num%10;
            rev=rev*10+rem;
            num/=10;
        }
        if(rev<-2147483648||rev>2147483647){
            return 0;
        }
        return -rev;
        }
    }
};