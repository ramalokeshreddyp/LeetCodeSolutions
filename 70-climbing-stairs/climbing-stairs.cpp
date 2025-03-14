class Solution {
public:
    int climbStairs(int n) {
       int i=1,j=2;
       if(n==1){
        return i;
       }
       for(int k=3;k<=n;k++) {
        int w=i+j;
        i=j;
        j=w;
       }
       return j;
    }
};