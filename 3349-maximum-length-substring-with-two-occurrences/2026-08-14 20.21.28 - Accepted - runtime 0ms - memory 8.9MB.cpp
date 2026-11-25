class Solution {
public:
    int maximumLengthSubstring(string s) {
        // unordered_map<char , int >mpp;

        int maxi = 0 , l=0 ,r=0 ; 
        vector<int>v(26,0);
        while(r <s.size()){
           v[s[r]-'a']++;
            while ( v[s[r]-'a'] > 2) {
                 v[s[l]-'a']--;
                l++;
            }

            maxi = max(maxi , r-l+1);
            r++;
        }
        return maxi ; 
    }
};