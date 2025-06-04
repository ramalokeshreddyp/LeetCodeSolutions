class Solution {
public:
bool iscc(vector<int>&position,int m,int md){
    int c=1;
    int ls=position[0];
    for(int i=1;i<position.size();i++){
        if(position[i]-ls>=md){
            c++;
            ls=position[i];
            
        
        if(c==m){
                return true;
            }
    }
    }
    return false;
}
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n=position.size();
        int low=1;
        int high=position[n-1]-position[0];
        int result=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(iscc(position,m,mid)){
                result=mid;
              low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return result;
    }
};