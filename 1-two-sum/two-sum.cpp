#include<bits/stdc++.h>
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
       unordered_map<int, int> mp;
    for (int i = 0; i < arr.size(); i++) {
        int key = target - arr[i];
        if (mp.find(key) != mp.end()) {
            return {mp[key], i}; 
        }
        mp[arr[i]] = i; 
    }
    return {}; 
    }
};