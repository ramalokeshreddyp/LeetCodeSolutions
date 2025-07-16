class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int>res(num_people);
        int c=1;
        int i=0;
        while(candies>0){
            if(c<=candies){
res[i]+=c;
            }
            else{
                res[i]+=candies;
                candies=0;
            }
candies-=c;
c++;
i=(i+1)%num_people;
        }
        return res;
    }
};