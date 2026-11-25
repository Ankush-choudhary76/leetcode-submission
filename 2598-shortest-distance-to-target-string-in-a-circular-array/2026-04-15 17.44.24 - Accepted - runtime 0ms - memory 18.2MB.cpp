class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        int mini = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (words[i] == target) {
                int f= abs(i - startIndex);
                int b = n - f;
                mini = min(mini, min(f, b));
            }
        }

        return mini == INT_MAX ? -1 : mini;
    }
};