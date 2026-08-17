class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size();
        for(int k=0;k<n;k++){
            int i=0,j=image[k].size()-1;
            while(i<=j){
                if(i==j){
                   image[k][i]^=1; 
                }
                else{
                image[k][i]=image[k][i]^1;
                image[k][j]=image[k][j]^1;
                swap(image[k][i],image[k][j]);
                }
i++;
j--;
            }
        }
        return image;
    }
};