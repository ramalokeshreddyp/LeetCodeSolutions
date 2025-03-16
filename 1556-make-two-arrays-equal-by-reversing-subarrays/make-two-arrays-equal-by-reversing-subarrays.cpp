class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int>mpp;
        for(auto it:target){
            mpp[it]++;
        }
        for(auto it:arr){
            if(--mpp[it]<0){
                return false;
            }
        }
        return true;
    }
};