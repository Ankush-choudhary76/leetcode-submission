class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start,int destination) {
         int tot = 0;

        for (auto it  : distance) {
            tot+= it;
        }

        if (start > destination) {
            swap(start, destination);
        }

        int dis = 0;
        for (int i = start; i < destination; i++) {
            dis += distance[i];
        }

        return min(dis, tot - dis);
    }
};