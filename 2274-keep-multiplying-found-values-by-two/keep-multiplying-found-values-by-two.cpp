class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
       priority_queue<int,vector<int>,greater<int>>pq;
       
for (int num : nums) {
pq.push(num);
}
while(!pq.empty()){
    if(pq.top()==original){
        original*=2;
    }
    pq.pop();
}
return original;
    }
};