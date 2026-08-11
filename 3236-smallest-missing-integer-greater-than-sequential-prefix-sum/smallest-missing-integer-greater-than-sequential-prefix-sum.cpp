class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>us(nums.begin(),nums.end());
int sum=nums[0],mx=nums[0];
for(int i=1;i<n;i++){
    if(nums[i-1]+1==nums[i]){
        sum+=nums[i];
    }
    else{
        mx=max(mx,sum);
        break;
        sum=nums[i];
    }
}
mx=max(mx,sum);
int ans=mx;
while(us.count(ans)){
   ans++;
   
   
}

return ans;
            }
};