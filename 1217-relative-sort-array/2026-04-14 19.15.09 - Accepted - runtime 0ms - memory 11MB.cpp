class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
         int maxi = *max_element(arr1.begin(), arr1.end());
        vector<int> count(maxi+ 1);

        
        for (auto it  : arr1) {
            count[it ]++;
        }

        vector<int> result;
      
        for (auto it  : arr2) {
            while (count[it] > 0) {
                result.push_back(it);
                count[it]--;
            }
        }
       
        for (int i = 0; i<= maxi; i++) {
            while (count[i] > 0) {
                result.push_back(i);
                count[i]--;
            }
        }
        return result;
  
    }
};