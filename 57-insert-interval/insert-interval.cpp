class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
         vector<vector<int>>m;
        for(auto it:intervals){
            if(m.empty()||m.back()[1]<it[0]){
                m.push_back(it);
            }
            else{
                m.back()[1]=max(m.back()[1],it[1]);
            }
        }
        return m;

    }
};