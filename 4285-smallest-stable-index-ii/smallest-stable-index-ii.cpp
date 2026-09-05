class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
          int n=nums.size();

        vector<int>t(n);
        int mn=nums[n-1];
        t[n-1]=mn;
        for(int i=n-2;i>=0;i--){
            mn=min(mn,nums[i]);
            t[i]=mn;
        }
        int ind=-1;
        int mx=nums[0];
        if(mx-t[0]<=k){
            ind=0;
        }
        for(int i=1;i<n;i++){
            mx=max(mx,nums[i]);
            if(mx-t[i]<=k){
                if(ind==-1){
                    ind=i;
                }
                else if(ind>i){
                    ind=i;
                }
            }

        }
        return ind;
    }
};