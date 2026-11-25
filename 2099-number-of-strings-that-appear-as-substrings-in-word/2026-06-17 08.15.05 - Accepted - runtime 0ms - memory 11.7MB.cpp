class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int cnt  = 0;
        int n = patterns.size();
        for (int i = 0; i < n; i++) {
            if (word.contains(patterns[i]))
                cnt++;
        }

        return cnt;
    }
};