class Solution {
public:
    string reverseOnlyLetters(string s) {
        stack<char>st;
        for(char c:s){
            if(c>=65&&c<=90||c>=97&&c<=122){
            st.push(c);
            }
        }
    for(int i=0;i<s.size();i++){
        if(s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=122){
            s[i]=st.top();
            st.pop();
        }
    }
    return s;
    }
};