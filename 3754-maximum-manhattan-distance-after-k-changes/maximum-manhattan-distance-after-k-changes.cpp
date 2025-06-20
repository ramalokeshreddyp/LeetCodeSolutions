class Solution {
public:
    int maxDistance(string s, int k) {
        int movement[4] = {0};
        int ans = 0;
        int mini = 0;
        int maxi = 0;
        for(auto i: s){
            if(i=='N'){
                movement[0]++;
            }
            else if(i=='S'){
                movement[1]++;
            }
            else if(i=='E'){
                movement[2]++;
            }
            else{
                movement[3]++;
            }
            maxi = max(movement[0],movement[1])+max(movement[2],movement[3]);
            mini = min(movement[0],movement[1])+min(movement[2],movement[3]);
            if(mini<=k){
                ans = max(ans,maxi+mini);
            }
            else{
                ans = max(ans,maxi-mini+(2*k));
            }
        }
        return ans;
    }
};