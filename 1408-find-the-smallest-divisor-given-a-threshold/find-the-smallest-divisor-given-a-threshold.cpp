class Solution {
public:
bool iscc(vector<int>& nums,int threshold,int mid){
    int sum=0;
    for(auto it:nums){
        sum+=(it+mid-1)/mid;
    }
    return sum<=threshold;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        sort(nums.begin(),nums.end());
       int low=1;
       int high=*max_element(nums.begin(),nums.end());
       int result=high;
       while(low<=high) 
       {
        int mid=low+(high-low)/2;
        if(iscc(nums,threshold,mid)){
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