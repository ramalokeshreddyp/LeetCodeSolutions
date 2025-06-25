class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size()/2;
        unordered_map<int,int>mpp;
        int cnt=0;
        for(auto it:candyType){
            if(mpp.find(it)!=mpp.end()){
                continue;
            }
            mpp[it]=1;
            cnt++;
        }
        if(cnt<=n){
            return cnt;
        }
        return n;
    }
};