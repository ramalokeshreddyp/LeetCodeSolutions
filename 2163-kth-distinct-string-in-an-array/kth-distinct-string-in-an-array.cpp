class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int cnt=0;
      for(int i=0;i<arr.size();i++)  {
int key=count(arr.begin(),arr.end(),arr[i]);
if(key==1){
    cnt++;
}
if(k==cnt){
    return arr[i];
}
      }
      return "";
    }
};