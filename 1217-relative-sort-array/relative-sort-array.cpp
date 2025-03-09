class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>res;
      for(int i=0;i<arr2.size();i++){
for(int j=0;j<arr1.size();j++){
    if(arr2[i]==arr1[j]){
        res.push_back(arr1[j]);
    }
}
      }
    sort(arr1.begin(),arr1.end());
    for(int i=0;i<arr1.size();i++){
        if(find(arr2.begin(),arr2.end(),arr1[i])==arr2.end()){
            res.push_back(arr1[i]);
        }
    }
    
    return res;
    }
};