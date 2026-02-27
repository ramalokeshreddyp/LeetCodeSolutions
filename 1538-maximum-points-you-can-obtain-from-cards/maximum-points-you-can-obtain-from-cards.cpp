class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int l=0,r=0;
        for(int i=0;i<=k-1;i++){
            l+=cardPoints[i];
        }
        int mx=l;
        int in=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--){
            l-=cardPoints[i];
            r+=cardPoints[in];
            in--;
            mx=max(mx,l+r);
        }
        return mx;
    }
};