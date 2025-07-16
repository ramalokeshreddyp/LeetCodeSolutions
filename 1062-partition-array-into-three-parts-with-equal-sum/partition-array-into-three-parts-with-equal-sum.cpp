class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=accumulate(arr.begin(),arr.end(),0);
        if(sum%3!=0){
            return false;
        }
        sum/=3;
        int c=0,s=0;
        for(auto it:arr){
s+=it;
if(s==sum){
    c++;
    s=0;
}
        }
        return c>=3;
    }
};