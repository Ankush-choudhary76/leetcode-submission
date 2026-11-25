class Solution {
public:
    string fun(string  s) {
        vector<int> freq(26, 0);
        for (auto  it : s)
            freq[it - 'a']++;
        string str = "";
        for (int i = 0; i < 26; i++)
            str += (char)('a' + i) + to_string(freq[i]);
        return str;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for (auto it : strs)
            mp[fun(it)].push_back(it);
        vector<vector<string>> ans;
        for (auto it : mp)
            ans.push_back(it.second);
        return ans;
    }
};