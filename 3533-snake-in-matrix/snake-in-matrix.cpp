class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
     vector<vector<int>>mat(n,vector<int>(n,0));
     int i,j;
     for( i=0;i<n;i++){
        for( j=0;j<n;j++){
            mat[i][j]=(i*n)+j;
        }
     }
     i=0,j=0;
     for(auto str:commands){
        if(str=="UP"){
            i--;
        }
        else if(str=="DOWN"){
            i++;
        }
        else if(str=="LEFT"){
            j--;
        }
        else{
            j++;
        }
     }
     return mat[i][j];
    }
};