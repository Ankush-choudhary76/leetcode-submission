class Solution {
public:
    bool fun(int n, vector<int>& arr, int d) {
        for (auto it  : arr) {
            if (abs(it - n) <= d) return false;
        }
        return true;
    }
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
         int ans = 0;
        for (auto it : arr1) {
            if (fun(it, arr2, d)) ans++;
        }
        return ans;
         
    }
    
};