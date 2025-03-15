class Solution {
public:
    string getEncryptedString(string s, int k) {
        int len=s.size();
        k=k%len;
        rotate(s.begin(),s.begin()+k,s.end());
        return s;
    }
};