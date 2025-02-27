class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n=operations.size();
        deque<int>dq;
        for(string op:operations){
            if(op=="+"){
                int  num1=dq.back();
dq.pop_back();
int  num2=dq.back();
dq.pop_back();
dq.push_back(num2);
dq.push_back(num1);
dq.push_back((num1+num2));
            }
            else if(op=="D"){
                int  num1=dq.back();
                dq.push_back(2*num1);
            }
            else if(op=="C"){
                dq.pop_back();
            }
            else{
                dq.push_back(stoi(op));
            }
        }
        return std::accumulate(dq.begin(),dq.end(),0);
    }
};