class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k%=n;
int res=n-k;
res%=n;
      std::rotate(nums.begin(),nums.begin()+res,nums.end());
    }
};