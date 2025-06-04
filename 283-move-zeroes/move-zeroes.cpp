class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int in1=-1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0&&in1==-1){
            in1=i;
        }
       if(nums[i]!=0)
       {
        if(in1!=-1){
            swap(nums[i],nums[in1]);
            in1++;
        }
       }
    }

    }
};