class Solution {
public:
bool ca(vector<int>&bloomDay,int m,int k,int day){
    int flo=0,bq=0;
    for(auto it:bloomDay){
        if(it<=day){
            flo++;
            if(flo==k){
                bq++;
                flo=0;
            }
        }
        else{
            flo=0;
        }
    }
   return  bq>=m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
       long long tf=1LL*k*m;
       if(bloomDay.size()<tf) {
        return -1;
       }
       int low=1;
       int high=*max_element(bloomDay.begin(),bloomDay.end());
       int result=-1;
       while(low<=high){
        int mid=low+(high-low)/2;
        if(ca(bloomDay,m,k,mid)){
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