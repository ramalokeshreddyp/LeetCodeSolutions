class Solution {
public:
   string sortVowels(string s) {
   multiset<char>st;
   for(int i=0;i<s.size();i++){
    if(s[i]=='A'||s[i]=='a'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u'||s[i]=='E'||s[i]=='e'){
      st.insert(s[i]);
    }
}
auto it=st.begin();
 for(int i=0;i<s.size();i++){
    if(s[i]=='A'||s[i]=='a'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u'||s[i]=='E'||s[i]=='e'){
    s[i]=*it;
    it++;
    }
}
return s;
}

};