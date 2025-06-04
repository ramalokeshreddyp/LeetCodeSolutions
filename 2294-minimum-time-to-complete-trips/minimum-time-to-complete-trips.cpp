class Solution {
public:
bool iscc(vector<int>&time,long long mid,long long p){
    long long t=0;
    for(auto it:time){
        t+=mid/it;
    }
    return t>=p;
}
    long long minimumTime(vector<int>& time, int totalTrips) {
     long long low=1;
     long long high=1LL* *min_element(time.begin(),time.end())*totalTrips;
     long long result=high;
     while(low<=high)   {
        long long mid=low+(high-low)/2;
        if(iscc(time,mid,totalTrips)){
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