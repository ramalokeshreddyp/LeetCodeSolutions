class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(auto it:s)
        {
            if(isalpha(it)){
            str+=tolower(it);
            }
            else if(isdigit(it)){
                str+=it;
            }
        }
        int n=str.size();
        for(int i=0;i<n/2;i++){
            if(str[i]!=str[n-1-i]){
                return false;
            }
        }
        return true;
    }
};