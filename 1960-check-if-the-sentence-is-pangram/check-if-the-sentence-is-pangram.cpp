class Solution {
public:
    bool checkIfPangram(string sentence) {
        for(int i=97;i<=122;i++){
            if(sentence.find(i)==string::npos){
return false;
            }
        }
        return true;
    }
};