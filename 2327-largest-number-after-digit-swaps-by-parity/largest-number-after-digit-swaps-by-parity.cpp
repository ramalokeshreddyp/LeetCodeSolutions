class Solution {
public:
    int largestInteger(int num) {
       string str=to_string(num) ;
       priority_queue<int>pq1,pq2;
       for(int i=0;i<str.size();i++){
        int n=str[i]-'0';
        if(n%2==0){
            pq1.push(n);
        }
        else{
            pq2.push(n);
        }
       }
       int res=0;
       for(int i=0;i<str.size();i++){
        int n=str[i]-'0';
        if(n%2==0){
            res=res*10+pq1.top();
            pq1.pop();
        }
        else{
            res=res*10+pq2.top();
            pq2.pop();
        }
       }
       return res;
    }
};