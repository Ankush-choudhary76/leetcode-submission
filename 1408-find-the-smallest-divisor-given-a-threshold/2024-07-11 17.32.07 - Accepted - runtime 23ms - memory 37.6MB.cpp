class Solution {
public:
    int smallestD(vector<int>nums , int m ){
        int n = nums.size();
        int   cnt = 0 ;
        for(int i = 0 ; i< n ; i++){
            cnt += ceil((double)nums[i]/ (double)(m));
        }
        return cnt ;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
         long long  low  = 1;
         long long  high = *max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid = (low + high)/2;
            if(smallestD(nums , mid)<= threshold){
                high = mid -1 ;
            }else{
                low = mid + 1 ;
            }
        }
        return low ;
    }
};