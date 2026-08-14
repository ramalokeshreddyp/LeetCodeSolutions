class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.size(),cnt=0;
        for(int i=0;i<n;i++){
            unordered_map<char,int>mpp;
            for(int j=i;j<n;j++){
                mpp[s[j]]++;
                if(mpp[s[j]]>2){
                    break;
                }
                else{
                    cnt=max(cnt,j-i+1);
                }
            }
        }
        return cnt;
    }
};