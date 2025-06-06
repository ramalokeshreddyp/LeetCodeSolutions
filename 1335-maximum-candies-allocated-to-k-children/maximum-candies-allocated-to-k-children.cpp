class Solution {
public:
bool iscc(vector<int>&candies,long long k,long long  mid){
    long long  c=0;
    for(auto it:candies){
        c+=it/mid;
    }
    return c>=k;
}
    int maximumCandies(vector<int>& candies, long long k) {
     long long  low=1;
     long long  high=*max_element(candies.begin(),candies.end())   ;
     long long  result=0;
     while(low<=high){
        long long  mid=low+(high-low)/2;
        if(iscc(candies,k,mid)){
            result=mid;
            low=mid+1;
        }
        else{
high=mid-1;
        }
     }
     return result;
    }
};