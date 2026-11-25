class Solution {
public:
    string getHint(string secret, string guess) {
        int n = secret.length();
        int bulls = 0, cows=0;
        unordered_map<char, int> mp;
        for(int i=0;i<n;i++){
            mp[secret[i]]++;
        }
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(mp.find(guess[i])!=mp.end() && mp[guess[i]]>0) {
                cnt++;
                mp[guess[i]]--;
            }
        }
        
        for(int i=0;i<n;i++){
            if(secret[i]==guess[i]){
                bulls++;
            }
        }
        cows = cnt - bulls;
        string s = to_string(bulls);
        s += 'A';
        s += to_string(cows);
        s += 'B';
        return s;
    }
};