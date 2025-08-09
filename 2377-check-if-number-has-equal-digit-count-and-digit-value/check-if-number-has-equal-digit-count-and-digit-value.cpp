class Solution {
public:
    bool digitCount(string num) {
        int n=num.size();
        unordered_map<char,int>mpp;
        for(auto it:num){
            mpp[it]++;
        }
        for(int i=0;i<num.size();i++){
            char dc = '0' + i;
            if(mpp.find(dc)==mpp.end()&&num[i]=='0'){
                continue;
            }
else if(mpp[dc]!=num[i]-'0'){
                return false;
            }
        }
        return true;
    }
};