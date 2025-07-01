class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size(),sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==j||j==n-1-i){
                    sum+=mat[i][j];
                }
            }
        }
        return sum;
    }
};