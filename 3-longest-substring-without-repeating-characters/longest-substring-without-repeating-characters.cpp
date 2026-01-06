class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int n=s.size();
   
    int maxl=0;
    for(int i=0;i<n;i++){
        int hash[256]={0};
        for(int j=i;j<n;j++){
            if(hash[s[j]]==1){
                break;
            }
            maxl=max(maxl,j-i+1);
hash[s[j]]=1;
        }
    }
    return maxl;
    }
};