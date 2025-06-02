class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
vector<int>copy=arr;    
sort(copy.begin(),copy.end())    ;
unordered_map<int,int>mpp;
int i=1;
for(auto it:copy){
    if(mpp.find(it)==mpp.end()){
        mpp[it]=i++;
        
    }
}
vector<int>res;
for(auto it:arr){
    res.push_back(mpp[it]);
}
return res;
    }

};