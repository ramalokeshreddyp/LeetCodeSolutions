class Solution {
public:
bool f(string& s,int i,int n){
    if(i>=n/2){
        return true;
    }
    if(s[i]!=s[n-i-1]){
        return false;
    }
   return  f(s,i+1,n);
}
    bool isPalindrome(string s) {
        string str;
      for(auto it:s)
        {
            if(isalpha(it)){
            str.push_back(tolower(it));
            }
            else if(isdigit(it)){
             str.push_back(it);
            }
        }
        return f(str,0,str.size());
    }
};