class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        int sum1=accumulate(s.begin(),s.end(),0);
        int sum2=accumulate(nums.begin(),nums.end(),0);
        int dup=sum2-sum1;
        int n=nums.size();
        int cal=n*(n+1)/2;
        return {dup,cal-sum1};
    }
};