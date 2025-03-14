class Solution {
public:
   bool isValid(string word) {
    if (word.size() < 3) {
        return false;
    }
    int u = 0, l = 0;
    for (int i = 0; i < word.size(); i++) {
        if (isdigit(word[i])) {
            continue;
        } else if (isupper(word[i])) {
            if(word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='U'||word[i]=='O'){
            l= 1;
            } 
            else{
                u=1;
            }
        
        } else if (islower(word[i])) {
            if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'){
            l = 1;
            }
            else{
                u=1;
            }
        } else {
            return false;
        }
    }
    return u && l;
}

};