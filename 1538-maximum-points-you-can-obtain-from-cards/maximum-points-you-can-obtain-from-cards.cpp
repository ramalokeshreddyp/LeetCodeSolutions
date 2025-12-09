class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int l=0,r=0,maxs=0;
        for(int i=0;i<=k-1;i++){
            l+=cardPoints[i];
        }
maxs=l;
int ri=cardPoints.size()-1;
for(int i=k-1;i>=0;i--){
    l-=cardPoints[i];
    r+=cardPoints[ri];
    ri--;
    maxs=max(maxs,r+l);
}
return maxs;
    }
};