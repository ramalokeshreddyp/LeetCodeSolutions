class Solution {
public:
void f(vector<char>& s,int i,int n){
    if(i>=n/2){
        return;
    }
    swap(s[i],s[n-i-1]);
    f(s,i+1,n);
}
    void reverseString(vector<char>& s) {
        f(s,0,s.size());
    }
};