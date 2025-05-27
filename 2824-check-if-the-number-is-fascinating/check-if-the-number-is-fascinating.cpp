class Solution {
public:
    bool isFascinating(int n) {
      int n1=2*n,n2=3*n;
      string str;
      str+=to_string(n);
      str+=to_string(n1);
      str+=to_string(n2);
      unordered_map<char,int>mpp;
      for(int i=0;i<str.size();i++){
        mpp[str[i]]++;
      }
      if(mpp.find('0')!=mpp.end()){
        return false;
      }
      for(auto it:mpp){
        if(it.second>1){
            return false;
        }
      }
      return true;
    }
};