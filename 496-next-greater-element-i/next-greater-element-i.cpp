class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int,int>mpp;
    stack<int>st;
    for(auto it:nums2){
        while(!st.empty()&&it>st.top()){
            mpp[st.top()]=it;
st.pop();
        }
        st.push(it);
    }
    while(!st.empty()){
        mpp[st.top()]=-1;
        st.pop();
    }
    vector<int>res;
    for(int i=0;i<nums1.size();i++){
        res.push_back(mpp[nums1[i]]);
    }
    return res;
    }
};