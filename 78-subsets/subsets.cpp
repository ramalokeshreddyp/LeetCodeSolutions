class Solution {
public:
void printf(int ind,int n,vector<int>& arr,vector<vector<int>>& res,vector<int>& a){
  
    if(ind==n){
        res.push_back(a);
        return;
    }
    a.push_back(arr[ind]);
    printf(ind+1,n,arr,res,a);
    a.pop_back();
    printf(ind+1,n,arr,res,a);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>a;
        int n=nums.size();
        printf(0,n,nums,res,a);
        return res;
    }
};