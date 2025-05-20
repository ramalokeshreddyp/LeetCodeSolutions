class Solution {
public:
    bool rotateString(string s, string goal) {
        deque<char>dq1(s.begin(),s.end());
        deque<char>dq2(goal.begin(),goal.end());
        int n=s.size();
        while(n--){
            dq1.push_back(dq1.front());
            dq1.pop_front();
            if(dq1==dq2){
                return true;
            }
        }
return false;
    }
};