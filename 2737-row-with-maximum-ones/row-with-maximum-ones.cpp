class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        priority_queue<pair<int,int>>pq;
        int i=0;
        for(auto it:mat){
            pq.push({count(it.begin(),it.end(),1),-i});
            i++;

        }
       return {-pq.top().second,pq.top().first};
    }
};