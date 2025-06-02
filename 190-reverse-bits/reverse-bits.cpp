class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
      bitset<32>b(n)  ;
      int si=b.size();
      for (int i = 0; i <si/2; ++i) {
        int temp=b[i];
        b[i]=b[si-1-i];
        b[si-1-i]=temp;
    
}
return b.to_ulong();

    }
};