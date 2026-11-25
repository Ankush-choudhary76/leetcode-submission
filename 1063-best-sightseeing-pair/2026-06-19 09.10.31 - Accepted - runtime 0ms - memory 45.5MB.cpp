class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
    int val = values[0];
    int ans = INT_MIN;

    for (int j = 1; j < values.size(); j++) {
        ans = max(ans, val + values[j] - j);
        val = max(val, values[j] + j);
    }
    return ans;
}
    
};