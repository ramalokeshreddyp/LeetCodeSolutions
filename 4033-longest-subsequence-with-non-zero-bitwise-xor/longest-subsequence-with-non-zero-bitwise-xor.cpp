class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        vector<int>res=nums;
        int r=0,n=res.size(),a=0;
        for(auto it:res){
            r^=it;
            if(it){
                a=1;
                
            }
        }
        if(r){
            return n;
        }
        return a?n-1:0;
    }
};