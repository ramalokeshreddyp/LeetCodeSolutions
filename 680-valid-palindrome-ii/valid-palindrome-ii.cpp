class Solution {
public:
    bool validPalindrome(string s) {
      int n=s.size();
      int low=0,high=n-1;
      while(low<high){
        if(s[low]==s[high]){
            low++;
            high--;

        }
        else{
            break;
        }
      }
if(low==high||abs(low-high)==1){
    return true;
}
string str1=s.substr(low+1,high-low);
string str2=s.substr(low,high-low);
int f=1;
for(int i=0;i<str1.size()/2;i++){
if(str1[i]!=str1[str1.size()-1-i]){
  f=0;
  break;
}
}
int g=1;
for(int i=0;i<str2.size()/2;i++){
if(str2[i]!=str2[str2.size()-1-i]){
    g=0;
    break;
}
}
if(f==1||g==1){
    return true;
}
return false;
    }
};