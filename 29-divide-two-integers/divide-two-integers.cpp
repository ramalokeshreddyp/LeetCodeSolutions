class Solution {
public:
    int divide(int dividend, int divisor) {
       if(dividend==divisor){
        return 1;
       }
bool sign=true;
if(dividend>=0&&divisor<0){
    sign=false;
}
if(dividend<=0&&divisor>0){
    sign=false;
}
long n=abs((long)dividend);
long d=abs((long)divisor);
long ans=0;
/*while(n>=d){
    int cnt=0;
    while(n>=(d<<(cnt+1))){
        cnt++;
    }
    ans+=(1LL<<cnt);
    n-=(d<<cnt);
}*/
for (int i = 31; i >= 0; i--) {
            if ((d << i) <= n) {
                n -= (d << i);
                ans += (1LL << i);
            }
        }
if(ans>=(1LL<<31)&&sign){
    return INT_MAX;
}
if(ans>=(1LL<<31)&&!sign){
    return INT_MIN;
}

return sign?ans:(-ans);

    }
};