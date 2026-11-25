class Solution {
public:
    int numberOfSpecialChars(string word) {
    vector<int> lower(26, -1);
    vector<int> upper(26, -1);

        for (int i = 0; i < word.size(); i++) {
            
            auto it = word[i];

            if (islower(it)) {
                lower[it - 'a'] = i; 
            } 
            else {
                int id = tolower(it) - 'a';

             
                if (upper[id] == -1) {
                    upper[id] = i;
                }
            }
        }

        int ans = 0;

        for (int i = 0; i < 26; i++) {
            
            if (lower[i] != -1 &&
                upper[i] != -1 &&
                lower[i] < upper[i]) {
                
                ans++;
            }
        }

        return ans;
    }
};