class Solution {
public:
    int reverseDegree(string s) {
        int cnt=0;
        for(int i=0;i<s.size();i++){
            int cal=('z'-s[i])+1;
            cnt+=(cal*(i+1));
        }
        return cnt;
    }
};