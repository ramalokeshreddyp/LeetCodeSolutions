class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size(),mx=0;
   int l=0,r=0;
   int hash[256];
   for(int i=0;i<256;i++){
    hash[i]=-1;
   }
   while(r<n){
if(hash[s[r]]!=-1){
if(hash[s[r]]>=l){
    
l=hash[s[r]]+1;
}
}
hash[s[r]]=r;
mx=max(mx,r-l+1);

r++;
   }
   return mx;
    }
};