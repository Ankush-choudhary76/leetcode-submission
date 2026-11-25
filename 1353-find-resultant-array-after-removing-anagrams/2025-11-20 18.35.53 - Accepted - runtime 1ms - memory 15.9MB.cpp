class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
         vector<string> ans;
        string prev = "";
        for (auto  word: words) {
            string sorted = word;
            sort(sorted.begin(), sorted.end());

            if (sorted != prev) {
                prev = sorted;
                ans.push_back(word);
            }
        }

        return ans;
    }
    
};