class Solution {
public:
    int maximumCount(vector<int>& nums) {
       int neg=count_if(nums.begin(),nums.end(),[](int x){return x<0;});
int pos=count_if(nums.begin(),nums.end(),[](int x){return x>0;});
return max(pos,neg);
    }
};