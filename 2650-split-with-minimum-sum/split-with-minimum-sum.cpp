class Solution {
public:
    int splitNum(int num) {
        string str=to_string(num);
        int num1=0,num2=0;
        sort(str.begin(),str.end());
        for(int i=0;i<str.size();i++){
            if(i%2==0){
            num1=num1*10+(str[i]-'0');
            }
            else{
                num2=num2*10+(str[i]-'0');
            }
        }
        return num1+num2;
    }
};