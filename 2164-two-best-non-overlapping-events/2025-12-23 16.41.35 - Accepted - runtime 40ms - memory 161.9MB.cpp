class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
       
        sort(events.begin(), events.end(),
            [](const vector<int>& a, const vector<int>& b) {
                return a[0] < b[0];
            });
        
        priority_queue<array<int, 2>, 
        vector<array<int, 2>>, 
        greater<array<int, 2>>> pq;
        
        int res = 0, maxVal = 0;
        for (int i = 0; i < events.size(); i++) {
            int st = events[i][0], et = events[i][1], v = events[i][2];
            while (pq.size() && st > pq.top()[0]) {
                maxVal = max(maxVal, pq.top()[1]);
                pq.pop();
            }
            pq.push({et, v});
            res = max(res, v + maxVal);
        }

        return res;
    }
};