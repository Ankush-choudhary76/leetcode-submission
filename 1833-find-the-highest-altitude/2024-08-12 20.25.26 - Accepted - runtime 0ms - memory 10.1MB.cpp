class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int hightest_alt =0 , maxi = 0 ;
        for(int i=0 ; i<gain.size();i++){
             hightest_alt += gain[i];
             maxi = max( hightest_alt , maxi);
        }
        return maxi;
    }
};