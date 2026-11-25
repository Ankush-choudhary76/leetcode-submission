class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> mpp;
        for (auto it : chars) {
            mpp[it]++;
        }
        int ans = 0;

        for (auto it : words) {
            unordered_map<char, int> mp = mpp;
            for (auto p : it) {
                if (mp.find(p) != mp.end() && mp[p] != 0) {
                    mp[p] -= 1;
                } else {
                    ans -= it.size();
                    break;
                }
            }
            ans+=it.size();
        }
        return ans ; 
    }
};