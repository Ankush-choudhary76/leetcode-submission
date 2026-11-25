class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n = arr.size();
        long long int   pre = 1 , suffi = 1 , maxpro = INT_MIN;
        for(int i = 0 ; i<n;i++){
             if(pre == 0) pre = 1 ;
             if(suffi == 0 ) suffi = 1 ;
             pre *= arr[i];
             suffi *= arr[n-i - 1];
              maxpro = max(maxpro , (long long int )max(pre , suffi));
            if(pre <INT_MIN)  pre = 1 ;
            if(suffi <INT_MIN) suffi = 1 ;
        }
       return (long long int )maxpro ;
    }
};