class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>mpp;
        for(auto it:arr){
            mpp[it]++;
        }
        int res=-1;
        for(auto it:mpp){
            if(it.first==it.second){
              res=it.first;  
            }
        }
        return res;
    }
};