class Solution {
public:
    void sortColors(vector<int>& nums) {
       stable_partition(nums.begin(),nums.end(),[](int x){return x==1;}) ;
       stable_partition(nums.begin(),nums.end(),[](int x){return x==0;}) ;
    }
};