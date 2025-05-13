class Solution {
public:
   
        int percentageLetter(string s, char letter) {
    int cnt = count(s.begin(), s.end(), letter);
    int n = s.size();
    return (cnt * 100) / n;
}

    
};