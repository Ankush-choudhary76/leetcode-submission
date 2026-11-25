class Solution {
public:
    int titleToNumber(string s) {
        int ans = 0 ; 
        for(auto  it : s ){
            int d = it-'A'+1;
             ans = ans * 26 + d ; 
        }
        return ans ;
    }
};