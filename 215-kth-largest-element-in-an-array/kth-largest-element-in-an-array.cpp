class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
       for(auto it:nums){
        pq.push(it);
       }
        int key=0;
        while(k--){
             key=pq.top();
            pq.pop();
        }
        return key;
    }
};