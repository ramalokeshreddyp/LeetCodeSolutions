class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
      map<int,int>mpp;
      for(auto it:nums)  {
        if(it%2==0){
            mpp[it]++;
        }
      }
      int curf=-1,cure=-1;
      for(auto it:mpp){
        if(cure==-1){
            cure=it.first;
            curf=it.second;
        }
        else if(it.second>curf){
            cure=it.first;
            curf=it.second;
        }
      }

return cure;
    }
};