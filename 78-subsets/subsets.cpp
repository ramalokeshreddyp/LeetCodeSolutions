class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>a;
        int n=nums.size();
        int subset=1<<n;
        for(int num=0;num<subset;num++){
            vector<int>res;
            for(int i=0;i<n;i++){
                if(num&(1<<i)){
                    res.push_back(nums[i]);
                }
            }
            a.push_back(res);
        }
        return a;
    }
    
};