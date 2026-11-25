class Solution {
public:
    
    int minEatingSpeed(vector<int>& arr, long long h) {
        long long low = 1 ,high = *max_element(arr.begin(),arr.end());
        long long  ans = high ;
        while(low<=high){
            long long int  mid =  low + (high - low)/2;
            long long  hrs = 0;
            for( auto bananas : arr){
                hrs += (bananas + mid -1)/ mid ;
            }
            if(hrs <= h ){
                 ans = min(ans , mid) ;
                   high = mid-1; }  
            else low = mid +1 ;
        }
        return ans; ;
    }
};