class Solution {
public:
    char kthCharacter(int k) {
     string str="a";
     int n=str.size();
     while(n<k){
        
        for(int i=0;i<n;i++){
            char ch='a'+((str[i]-'a'+1)%26);
            str.push_back(ch);
        }
        n=str.size();
     }
     return str[k-1];
    }
};