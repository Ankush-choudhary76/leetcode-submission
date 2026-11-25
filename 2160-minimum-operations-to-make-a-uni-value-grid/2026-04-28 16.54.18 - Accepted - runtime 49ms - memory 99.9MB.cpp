class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> arr;

        for (auto it : grid) {
            for (auto p : it)
                arr.push_back(p);
        }

        int base = arr[0];
        for (int it : arr) {
            if (abs(it - base) % x != 0)
                return -1;
        }

        sort(arr.begin(), arr.end());

        int median = arr[arr.size() / 2];

        int ops = 0;
        for (auto it : arr) {
            ops += abs(it - median) / x;
        }

        return ops;
    }
};