class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        float mini=INT_MAX;
        sort(nums.begin(),nums.end());
        deque<int>dq(nums.begin(),nums.end());
        while(!dq.empty()){
            int num1=dq.front();
            dq.pop_front();
            int num2=dq.back();
            dq.pop_back();
            float init=(float)(num1+num2)/2;
            if(init<mini){
                mini=init;
            }
        }
        return mini;
    }
};