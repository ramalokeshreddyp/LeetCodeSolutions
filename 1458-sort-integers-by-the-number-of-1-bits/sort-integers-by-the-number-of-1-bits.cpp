class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int n=arr.size();
        vector<int>res(n);
        for(int i=0;i<n;i++){
            res[i]=__builtin_popcount(arr[i]);
        }
        for(int i=0;i<n-1;i++){
for(int j=0;j<n-1-i;j++){
    if(res[j]>res[j+1]){
        int temp=res[j];
        res[j]=res[j+1];
        res[j+1]=temp;
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    }
    else if(res[j]==res[j+1]&&arr[j]>arr[j+1]){
              int   temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    }
}
        }
        return arr;
    }
};