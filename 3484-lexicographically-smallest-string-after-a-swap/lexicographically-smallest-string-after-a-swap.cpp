class Solution {
public:
    string getSmallestString(string s) {
        for(int i=0;i<s.size()-1;i++){
            int num1=s[i]-'0';
            int num2=s[i+1]-'0';
            if(num1%2==0&&num2%2==0&&num1>num2){
                swap(s[i],s[i+1]);
                break;
            }
             if(num1%2!=0&&num2%2!=0&&num1>num2){
                swap(s[i],s[i+1]);
                break;
            }
        }
        return s;
    }
};