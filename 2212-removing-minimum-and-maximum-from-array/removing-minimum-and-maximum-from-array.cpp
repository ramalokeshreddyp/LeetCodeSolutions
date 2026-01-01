class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int mini=min_element(nums.begin(),nums.end())-nums.begin();
        int maxi=max_element(nums.begin(),nums.end())-nums.begin();
        int left=min(mini,maxi);
        int right=max(mini,maxi);
        int c1=right+1;
        int c2=n-left;
        int c3=(left+1)+(n-right);
        return min({c1,c2,c3});
    }
};