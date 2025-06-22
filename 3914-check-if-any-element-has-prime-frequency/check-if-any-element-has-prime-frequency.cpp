class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(auto it:nums){
            mpp[it]++;
        }
    for(auto it:mpp){
        int num=it.second;
int c=1;
if(num<=1){
    c=-1;
}
        for(int i=2;i<=sqrt(num);i++){
            if(num%i==0){
               c=-1;
            }
        }
        if(c==1){
return true;
        }
    }
    return false;
    }
};