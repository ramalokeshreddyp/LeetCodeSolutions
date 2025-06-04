class Solution {
public:
bool isok(vector<int>&weights,int days,int c){
     int cl=0;
    int rd=1;
   
    for(int weight:weights){
        if(cl+weight>c){
            rd++;
            cl=0;
        }
        cl+=weight;
    }
    return rd<=days;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        int result=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isok(weights,days,mid)){
                result=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return result;
    }
};