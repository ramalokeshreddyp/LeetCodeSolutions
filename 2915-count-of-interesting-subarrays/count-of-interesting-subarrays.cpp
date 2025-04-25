class Solution {
public:
    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
       unordered_map<int, long long> freq;
    freq[0] = 1; 
    
    long long result = 0;
    int prefix = 0;

    for (int num : nums) {
       
        if (num % modulo == k)
            prefix++;

       
        int needed = (prefix - k + modulo) % modulo;
        result += freq[needed];

       
        freq[prefix % modulo]++;
    }

    return result; 
    }
};