class Solution {
public:
    int xorOperation(int n, int start) {
       int i=0;
       int res=0;
       while(i<n) {
        int num=start+(2*i);
        res^=num;
        i++;
       }

       return res;
    }
};