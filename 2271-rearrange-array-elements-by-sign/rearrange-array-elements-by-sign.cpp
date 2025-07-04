class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       stable_partition(nums.begin(),nums.end(),[](int x){return x>0;}); 
       vector<int>res;
       int n=nums.size();
       for(int i=0;i<n/2;i++){
        res.push_back(nums[i]);
        res.push_back(nums[n/2+i]);
       }
       return res;
    }
};