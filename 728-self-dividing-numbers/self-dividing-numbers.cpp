class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>res;
        while(left<=right){
            int num=left;
            int flag=1;
            while(num>0){
                int rem=num%10;
                if(rem==0||left%rem!=0){
                    flag=0;
                    break;
                }
                num/=10;
            }
            if(flag){
                res.push_back(left);
            }
            left++;
        }
        return res;
    }
};