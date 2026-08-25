class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>us(nums.begin(),nums.end());
        int res=1,a=k;
        while(us.count(k)){
            res++;
            k=a*res;
        }
        return k;
    }
};