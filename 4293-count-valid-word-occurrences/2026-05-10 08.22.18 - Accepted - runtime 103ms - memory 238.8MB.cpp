class Solution {
public:
    bool islow(char ch) { return ch >= 'a' && ch <= 'z'; }
    vector<int> countWordOccurrences(vector<string>& chunks,
                                     vector<string>& queries) {

        string s = " ";
        for (auto it : chunks) {
            s += it;
        }

        int n = s.size();
        int i = 0;

        unordered_map<string, int> mpp;
        while (i < n) {
            if (!islower(s[i])) {
                i++;
                continue;
            }

            int j = i;

            while (j < n) {
                if (islow(s[j])) {
                   j++;
                }else if (s[j]=='-' && j>i && j+1 <n && islow(s[j-1])&& islow(s[j+1]) ){
                    j++;
                }else{
                    break;
                }
            }
            mpp[s.substr(i, j - i)]++;
            i = j;
        }
        vector<int> ans;
        for (auto it : queries) {
            ans.push_back(mpp[it]);
        }
        return ans;
    }
};