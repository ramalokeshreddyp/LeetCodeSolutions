class Solution {
public:
    int maxSubArray(vector<int>& arr) {
       int cursum=arr[0];
        int maxsum=arr[0];
        for(auto it=arr.begin()+1;it!=arr.end();it++){
            cursum=max(*it,cursum+*it);
            maxsum=max(cursum,maxsum);
        }
        return maxsum;  
    }
};