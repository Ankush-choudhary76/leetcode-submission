class Solution {
public:
    int reverseDegree(string s) {
    
        int p = 1 ,ans=0 ;
        for (auto  it : s) {
            int val = 26 - (it - 'a');
            ans += val * p;
            p++;
        }
        return ans;
    }
};