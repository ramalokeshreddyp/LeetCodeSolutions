class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        sort(events.begin(), events.end());
        priority_queue<int, vector<int>, greater<int>> minHeap;
        int res = 0, day = 1, i = 0, n = events.size();
        int lastDay = 0;
        for (auto& e : events) lastDay = max(lastDay, e[1]);

        for (day = 1; day <= lastDay; day++) {
            while (i < n && events[i][0] == day) {
                minHeap.push(events[i][1]);
                i++;
            }
            while (!minHeap.empty() && minHeap.top() < day) {
                minHeap.pop();
            }
            if (!minHeap.empty()) {
                minHeap.pop();
                res++;
            }
        }
        return res;
    }
};
