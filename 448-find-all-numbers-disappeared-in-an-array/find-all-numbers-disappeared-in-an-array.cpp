class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
      set<int>s(nums.begin(),nums.end());
      vector<int>res;
      for(int i=0;i<nums.size();i++){
        if(s.find(i+1)==s.end()){
            res.push_back(i+1);
            s.insert(i+1);
        }
        
      }

      return res;
    }
};