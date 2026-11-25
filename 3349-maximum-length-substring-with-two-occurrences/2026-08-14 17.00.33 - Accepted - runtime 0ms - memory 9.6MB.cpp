class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char , int >mpp;

        int maxi = 0 , l=0 ,r=0 ; 
        while(r <s.size()){
            mpp[s[r]]++;
            while (mpp[s[r]] > 2) {
                mpp[s[l]]--;
                l++;
            }

            maxi = max(maxi , r-l+1);
            r++;
        }
        return maxi ; 
    }
};