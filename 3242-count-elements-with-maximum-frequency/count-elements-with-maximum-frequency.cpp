class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(auto it:nums){
        mpp[it]++;
        }
     priority_queue<int>pq;
     for(auto it:mpp){
        pq.push(it.second);

     }
     int num=pq.top();
     pq.pop();
     int res=num;
     while(!pq.empty()&&pq.top()==num){
        res+=num;
        pq.pop();
     }
     return res;
    }
};