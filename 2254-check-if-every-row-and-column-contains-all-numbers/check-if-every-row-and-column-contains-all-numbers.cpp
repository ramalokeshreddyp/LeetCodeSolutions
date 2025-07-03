class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
     
       int n=matrix.size(),m=matrix[0].size();
       for(int i=0;i<n;i++) {
          unordered_set<int>us1,us2;
        for(int j=0;j<m;j++){
            
            us1.insert(matrix[i][j]);
            us2.insert(matrix[j][i]);
        }
        if(us1.size()!=n||us2.size()!=n){
            return false;
        }
      
       }
       return true;
    }
};