class Solution {
public:
    int specialArray(vector<int>& nums) {
        for(int i=1;i<=nums.size();i++){
            int cnt=std::count_if(nums.begin(),nums.end(),[i](int x){return x>=i;});
            if(i==cnt){
                return i;
            }
        }
        return -1;
    }
};