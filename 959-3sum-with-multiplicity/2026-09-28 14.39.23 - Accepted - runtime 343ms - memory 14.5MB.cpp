class Solution {
public:
    int mod = 1e9+7;
    int threeSumMulti(vector<int>& arr, int target) {
          int ans =0 ; 
        unordered_map<int ,int >mpp; 

        for(int i=0 ; i<arr.size() ;i++){
            ans =(ans+mpp[target - arr[i]])% mod ; 

            for(int j=0 ; j<i ; j++){
                mpp[arr[i]+arr[j]]++;
            }
            
        }
        return ans ; 
    }
};