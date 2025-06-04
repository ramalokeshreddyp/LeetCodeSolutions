class Solution {
public:
bool cea(vector<int>&piles,int h,int k){
    long long  hours=0;
    for(auto pile:piles){
        hours+=(pile+k-1)/k;
    }
    return hours<=h;
}
    int minEatingSpeed(vector<int>& piles, int h) {
      long long low=1;
      long long  high=*max_element(piles.begin(),piles.end())  ;
      long long  result=high;
      while(low<=high){
        long long  mid=low+(high-low)/2;
        if(cea(piles,h,mid)){
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