class Solution {
public:
    int numberOfSpecialChars(string word) {
       unordered_set<char> lower;
        unordered_set<char> upper;
        for (auto it  : word) {
            if (islower(it )) {
                lower.insert(it );
            } else {
                upper.insert(tolower(it ));
            }
        }
        int ans = 0;
        for (auto it : lower) {
            if (upper.count(it )) {
                ans++;
            }
        }
        return ans;
    }
};