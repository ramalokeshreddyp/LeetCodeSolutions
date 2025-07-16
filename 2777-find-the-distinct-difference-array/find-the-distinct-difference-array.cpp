class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
int n=nums.size();
vector<int>res;

unordered_set<int>us;
int cnt=0;
for(auto it=nums.begin();it!=nums.end();it++){
    set<int>s(it+1,nums.end());
if(us.find(*it)==us.end()){
    us.insert(*it);
    cnt++;
}
res.push_back(us.size()-s.size());
}
return res;
    }

};