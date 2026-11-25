class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int n = s.size(), m = p.size();

        if (m > n) return ans;

        vector<int> cnt1(26, 0), cnt2(26, 0);

        for (auto it : p)
            cnt1[it - 'a']++;

        for (int i = 0; i < m; i++)
            cnt2[s[i] - 'a']++;

        if (cnt1 == cnt2)
            ans.push_back(0);

        for (int i = m; i < n; i++) {
            cnt2[s[i] - 'a']++;
            cnt2[s[i - m] - 'a']--;

            if (cnt1 == cnt2)
                ans.push_back(i - m + 1);
        }

        return ans;
    }
};