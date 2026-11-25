class Solution {
public:
    long long maximizeSum(vector<int>& arr, int k) {
       
        long long sum = 0;
        vector<int> g;

        for (int i = 0; i < arr.size(); i++) {
            string s = to_string(arr[i]);
            sort(s.begin(), s.end(), greater<char>());

            int val = stoi(s);
            g.push_back(val - arr[i]);
            sum += arr[i];
        }

        sort(g.rbegin(), g.rend());

        for (int i = 0; i < min(k, (int)g.size()); i++) {
            if (g[i] > 0) {
                sum += g[i];
            }
        }

        return sum;
    }
};