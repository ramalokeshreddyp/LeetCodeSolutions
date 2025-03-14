class Solution {
public:
    string clearDigits(string s) {
       stack<char>st;
       for(int i=0;i<s.size();i++) {
        if(isdigit(s[i])&&!st.empty()){
            if(!isdigit(st.top())){
st.pop();
            }
        }
        else{
            st.push(s[i]);
        }
       }
       string str;
       while(!st.empty()){
        str.push_back(st.top());
        st.pop();
       }
       reverse(str.begin(),str.end());
       return str;
    }
};