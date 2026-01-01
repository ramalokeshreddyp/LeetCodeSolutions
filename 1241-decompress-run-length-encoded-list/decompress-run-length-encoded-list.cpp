class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>res;
        for(int i=0;i<nums.size()-1;i++){
            int f=nums[i];
while(f>0){
    res.push_back(nums[i+1]);
    f--;

}
            i++;
        }
        return res;
    }
};