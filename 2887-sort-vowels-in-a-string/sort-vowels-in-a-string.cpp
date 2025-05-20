class Solution {
public:
    string sortVowels(string s) {
        priority_queue<char, vector<char>, greater<char>> pq;
for(int i=0;i<s.size();i++){
    if(s[i]=='A'||s[i]=='a'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u'||s[i]=='E'||s[i]=='e'){
        pq.push(s[i]);
    }
}
for(int i=0;i<s.size();i++){
    if(s[i]=='A'||s[i]=='a'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u'||s[i]=='E'||s[i]=='e'){
        s[i]=pq.top();
        pq.pop();
    }
}
return s;
    }
};