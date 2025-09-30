class Solution {
public:
void printf(int ind,int n,vector<int>& arr,vector<vector<int>>& res,vector<int>& a,set<vector<int>>& s){
  
    if(ind==n){
        if(s.find(a)==s.end()){
        res.push_back(a);
        s.insert(a);
        }
        return;
    }
    a.push_back(arr[ind]);
    printf(ind+1,n,arr,res,a,s);
    a.pop_back();
    printf(ind+1,n,arr,res,a,s);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         vector<vector<int>>res;
        vector<int>a;
        set<vector<int>>s;
        int n=nums.size();
        printf(0,n,nums,res,a,s);
        return res;
    }
};