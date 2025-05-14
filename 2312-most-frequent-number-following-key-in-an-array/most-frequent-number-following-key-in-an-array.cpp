class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==key){
                mpp[nums[i+1]]++;
            }
        }
        int mx=-1,cr=-1;
        for(auto it:mpp){
            if(cr==-1){
                mx=it.first;
                cr=it.second;
            }
            else if(it.second>cr){
                mx=it.first;
                cr=it.second;
            }
        }
        return mx;
    }
};