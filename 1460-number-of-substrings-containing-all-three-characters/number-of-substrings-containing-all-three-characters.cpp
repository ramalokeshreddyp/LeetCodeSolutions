class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size(),cnt=0;
        int hash[3];
        for(int i=0;i<3;i++){
            hash[i]=-1;
        }
        for(int i=0;i<n;i++){
           hash[s[i]-'a']=i;
           cnt+=min({hash[0],hash[1],hash[2]})+1;
  

            
        }
        return cnt;
    }
};