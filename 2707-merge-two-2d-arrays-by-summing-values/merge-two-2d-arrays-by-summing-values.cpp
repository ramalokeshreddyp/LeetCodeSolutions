class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
       nums1.insert(nums1.end(),nums2.begin(),nums2.end()); 
       sort(nums1.begin(),nums1.end());
          vector<vector<int>> merged;
          int c=0;
       for(int i=0;i<nums1.size()-1;i++){
        if(nums1[i][0]==nums1[i+1][0]){
            if(i==nums1.size()-2){
                c=1;
            }
            nums1[i][1]=nums1[i][1]+nums1[i+1][1];
            merged.push_back({nums1[i][0],nums1[i][1]});
            nums1[i+1][0]=0;
            i++;
        }
        else{
       merged.push_back({nums1[i][0],nums1[i][1]});
        }
       }
       if (nums1[nums1.size() - 2][0] != nums1[nums1.size() - 1][0]&&c==0) {
        merged.push_back({nums1.back()[0], nums1.back()[1]});
    }
       return merged;
    }
};