class Solution {
public:
    int numberOfChild(int n, int k) {
       vector<int>v;
       for(int i=0;i<n;i++) {
        v.push_back(i);
       }
       int cnt=0;
       int m=n-1;
       int key=k/m;
       int rem=k%m;
       if(key%2==0){
        return v[rem];
       }
       
        return v[n-1-rem];
       
    }
};