class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size() ; 
        int ans =0 ; 

        for(int i=0 ; i< n ;i++){
            int tot = (i+1) *(n-i);
            int od = (tot +1)/2 ; 
            ans +=arr[i]* od;
        }
        return ans ; 
    }
};