class Solution {
public:
    int numberOfSubstrings(string s) {
  int cnt=0;
  int hash[3]={-1,-1,-1};
  for(int i=0;i<s.size();i++){
    hash[s[i]-'a']=i;

    cnt+=(1+min({hash[0],hash[1],hash[2]}));

  }
  return cnt;

    }
};