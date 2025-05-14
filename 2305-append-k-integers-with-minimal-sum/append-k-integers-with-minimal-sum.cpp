class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
       set<long long >s(nums.begin(),nums.end()) ;
       long long cnt=1,sum=0;
       auto it=s.begin();
       while(it!=s.end()){
        if(*it==cnt){
            it++;
        }
        else{
sum+=cnt;
k--;
if(k==0){
    return sum;
}
        }
        cnt++;
       }
       while(k!=0){
        sum+=cnt;
        cnt++;
        k--;
       }
       return sum;
    }
};