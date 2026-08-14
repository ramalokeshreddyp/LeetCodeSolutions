class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.size(),cnt=0;
    unordered_map<int,int>mpp;
    int l=0,r=0;
    while(r<n){
        mpp[s[r]]++;
        while(mpp[s[r]]>2){
            mpp[s[l]]--;
            if(mpp[s[l]]==0){
                mpp.erase(s[l]);
            }
            l++;
        }
        cnt=max(cnt,r-l+1);
        r++;
    }
        return cnt;
    }
};