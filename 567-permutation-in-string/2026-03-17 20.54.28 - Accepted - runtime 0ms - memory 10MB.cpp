class Solution {
public:
    bool checkInclusion(string s1, string s2) {
           vector<int> arr(26);

        for (auto it  : s1) {
            arr[it -'a']++;
        }

        int l = 0, r = 0, n = s2.size();
        
        while (l < n && r < n) {
            if (arr[s2[r]-'a'] == 0) {
                while (l <= r && l < n-1 && s2[l] != s2[r]) {
                    arr[s2[l]-'a']++;
                    l++;
                }
                
                arr[s2[l]-'a']++;
                l++;
            }

            arr[s2[r]-'a']--;

            if (r-l+1 == s1.size()) {
                return true;
            }

            r++;
        }

        return false;
    }
};