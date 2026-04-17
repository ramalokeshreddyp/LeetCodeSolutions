class Solution {
public:
    int rev(int x){
        int r = 0;
        while(x){
            r = r * 10 + x % 10;
            x /= 10;
        }
        return r;
    }

    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans = INT_MAX;

        for(int i = 0; i < nums.size(); i++){
            if(mp.count(nums[i])) ans = min(ans, i - mp[nums[i]]);
            mp[rev(nums[i])] = i;
        }

        return ans == INT_MAX ? -1 : ans;
    }
};