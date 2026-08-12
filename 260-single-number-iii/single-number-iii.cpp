class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
       long  xorr=0;
       for(auto it:nums){
        xorr^=it;
       }
       int rm=(xorr&(xorr-1))^xorr;
       int b1=0,b2=0;
       for(auto it:nums){
        if(it&rm){
            b1^=it;
        }
        else{
            b2^=it;
        }
       }
       return {b1,b2};
    }
};