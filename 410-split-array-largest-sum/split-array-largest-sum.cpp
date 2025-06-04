class Solution {
public:
bool iscc(vector<int>&nums,int k,int msum){
    int csum=0,c=1;
    for(auto it:nums){
        if(csum+it>msum){
            c++;
            csum=it;
            if(c>k){
                return false;
            }
        }
        else{
            csum+=it;
        }
    }
    return true;
}
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        int result=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(iscc(nums,k,mid)){
                result=mid;
              high=mid-1;
            }
            else{
low=mid+1;
            }
        }
        return result;
    }

};