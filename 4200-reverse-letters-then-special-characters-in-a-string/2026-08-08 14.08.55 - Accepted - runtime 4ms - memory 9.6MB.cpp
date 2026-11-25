class Solution {
public:
    string reverseByType(string s) {
        vector<char> lower, other;

        
        for (auto it  : s) {
            if (islower(it))
                lower.push_back(it);
            else
                other.push_back(it);
        }

        
        reverse(lower.begin(), lower.end());
        reverse(other.begin(), other.end());

        string res = "";
        int i = 0, j = 0;

       
        for (auto it  : s) {
            if (islower(it)) {
                res += lower[i++];
            } else {
                res += other[j++];
            }
        }

        return res;
    }
};