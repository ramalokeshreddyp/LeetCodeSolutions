class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        st.push(s[0]);
int n=s.size();
for(int i=1;i<n;i++){
    if(!st.empty()&&st.top()==s[i]){
        st.pop();
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