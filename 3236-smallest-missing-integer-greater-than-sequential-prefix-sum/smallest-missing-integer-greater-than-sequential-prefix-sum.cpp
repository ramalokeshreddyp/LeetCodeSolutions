class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>us(nums.begin(),nums.end());
int sum=nums[0];
for(int i=1;i<n;i++){
    if(nums[i-1]+1==nums[i]){
        sum+=nums[i];
    }
    else{
        break;
    }
}

int ans=sum;

while(us.count(ans)){
   ans++;
   
   
}

return ans;
            }
};