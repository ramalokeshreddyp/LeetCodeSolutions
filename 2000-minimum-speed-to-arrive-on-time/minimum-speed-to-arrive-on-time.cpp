class Solution {
public:
 bool iscc(vector<int>& dist, double hour, int speed) {
        double time = 0.0;
        int n = dist.size();

        for (int i = 0; i < n - 1; ++i) {
            time += ceil((double)dist[i] / speed); 
        }
        time += (double)dist[n - 1] / speed; 

        return time <= hour;
    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
         if (hour <= dist.size() - 1) return -1;
        long long  low=1;
        long long  high=1e7;
        long long  result=-1;
        while(low<=high){
            long long  mid=low+(high-low)/2;
            if(iscc(dist,hour,mid)){
result=mid;
high=mid-1;
            }
            else{
low=mid+1;
            }
        }
        return result;
    }
};