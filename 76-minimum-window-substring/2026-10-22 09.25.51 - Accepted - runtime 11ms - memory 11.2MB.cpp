class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size(), m = t.size();
        unordered_map<char, int> mpp;

        for (auto it : t) {
            mpp[it]++;
        }
        int l = 0, r = 0, cnt = 0, maxi = INT_MAX, id = -1;
        while (r < n) {
            if (mpp[s[r]] > 0)
                cnt++;
            mpp[s[r]]--;
            while (cnt == m && l <= r) {
                if (r - l + 1 < maxi) {
                    maxi = r - l + 1;
                    id = l;
                }
                mpp[s[l]]++;
                if (mpp[s[l]] > 0)
                    cnt--;
                l++;
            }
            r++;
        }
        return id == -1 ?"": s.substr(id , maxi) ; 
    }
};