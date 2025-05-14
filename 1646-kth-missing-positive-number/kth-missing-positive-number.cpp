class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
      int cnt=1;
      int i=0;
      while(i<arr.size())  {
        if(arr[i]==cnt){
            i++;
     
        }
        else{
          int   num=cnt;
            k--;
            if(k==0){
                return num;
            }
        }
        cnt++;
      }
      return arr[arr.size()-1]+k;
    }
};