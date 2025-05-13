class Solution {
public:
    int maxFreqSum(string s) {
       unordered_map<char,int>mpp;
       for(int i=0;i<s.size();i++) {
        mpp[s[i]]++;
       }
       int maxo=0,maxc=0;
       for(int i=0;i<s.size();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            maxo=max(mpp[s[i]],maxo);
        }
        else{
            maxc=max(mpp[s[i]],maxc);
        }
       }
       return maxo+maxc;
    }
};