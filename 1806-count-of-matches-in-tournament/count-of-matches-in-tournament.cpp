class Solution {
public:
    int numberOfMatches(int n) {
        int cnt=0;
        while(n>1){
            int num=n/2;
           
                  cnt+=num;
               n-=num;
          
             
        }
        return cnt;
    }
};