class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
    unordered_set<int>us;
    for(int i=1;i<=k;i++)    {
        us.insert(i);
    }
    int cnt=0,n=nums.size();
    for(int i=n-1;i>=0;i--){
        cnt++;
        if(us.find(nums[i])!=us.end()){
            us.erase(nums[i]);
        }
if(us.empty()){
    return cnt;
}
    }
     return 0;
    }
   
};