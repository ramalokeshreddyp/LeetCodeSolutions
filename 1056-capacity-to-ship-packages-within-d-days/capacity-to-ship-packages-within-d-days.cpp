class Solution {
public:

   
    bool canShip(vector<int>& weights, int days, int capacity) {
        int currentLoad = 0;
        int requiredDays = 1;  

        for (int weight : weights) {
            if (currentLoad + weight > capacity) {
              
                requiredDays++;
                currentLoad = 0;
            }
            currentLoad += weight;
        }

        return requiredDays <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end()); 
        int high = accumulate(weights.begin(), weights.end(), 0); 
        int result = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canShip(weights, days, mid)) {
               
                result = mid;
                high = mid - 1;
            } else {
                
                low = mid + 1;
            }
        }

        return result;
    }
};
