class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
       vector<pair<int,string>>people;
       for(int i=0;i<names.size();i++){
        people.push_back({heights[i],names[i]});
       }
       sort(people.rbegin(),people.rend());
       int k=0;
       for(auto it:people){
        names[k]=it.second;
        k++;
       }
       return names;
    }
};