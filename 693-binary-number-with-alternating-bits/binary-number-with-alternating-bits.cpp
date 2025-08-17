class Solution {
public:
    bool hasAlternatingBits(int n) {
       bitset<32>b(n); 

    int last = -1; 
    for (int i = 31; i >= 0; i--) {  
        if (b.test(i)) {
            last = i;
            break;
        }
    } 
    for(int i=0;i<last;i++){
        if(b[i]==b[i+1]){
            return false;
        }
    }
    return true;
    }
};