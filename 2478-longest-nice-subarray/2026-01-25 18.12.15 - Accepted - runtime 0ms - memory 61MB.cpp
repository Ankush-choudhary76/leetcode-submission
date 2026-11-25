class Solution {
public:
    int longestNiceSubarray(vector<int>& arr) {
        int n = arr.size();
        int mask = 0;
        int j = 0;
        int maxi = 0;
        for (int i = 0; i < n; i++) { 
            while (mask & arr[i]) {
                mask ^= arr[j];   
                j++;
            }
            mask |= arr[i];
            maxi = max(maxi, i - j + 1);
        }
        return maxi;
    }
};