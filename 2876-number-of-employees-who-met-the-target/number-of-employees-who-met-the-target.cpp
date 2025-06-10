class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
int n=hours.size();
sort(hours.begin(),hours.end());
int low=0,high=n-1;

while(low<=high){
    int mid=low+(high-low)/2;
    if(hours[mid]>=target){
       
        high=mid-1;
    }
    else{
        low=mid+1;
    }
}
return n-low;
    }
};