class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
       // sort(fruits.begin(),fruits.end());
       // sort(baskets.begin(),baskets.end());
        int n=fruits.size();
        int cnt=0;
        for(int i=0;i<n;i++){

            for(int j=0;j<n;j++){
                if(baskets[j]!=-1&&baskets[j]>=fruits[i]){
                    baskets[j]=-1;
                    fruits[i]=-1;
                    break;
                }
            }
        }
        for(int i=0;i<n;i++){
if(fruits[i]!=-1){
            for(int j=0;j<n;j++){
                if(baskets[j]!=-1){
                    cnt++;
                    baskets[j]=-1;
                    fruits[i]=-1;
                    break;
                }
            }
}
        }
        return cnt;
    }
};