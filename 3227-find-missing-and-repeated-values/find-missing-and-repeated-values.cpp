class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int>mpp;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                mpp[grid[i][j]]++;
            }
        }
        int n=grid.size(),a,b;
        for(int i=1;i<=n*n;i++){
            if(mpp[i]>1){
                a=i;
            }
            if(mpp[i]==0){
                b=i;
            }
        }
return {a,b};
    }
};