class Solution {
public:
    void  marge(vector<int>&nums, int low , int mid , int high){
        vector<int>temp; 
        int left = low ; 
        int right = mid+1 ; 
        while(left <= mid && right <= high){
            if(nums[left]<= nums[right]){
                temp.push_back(nums[left]);
                left++ ; 
            }else{
                 temp.push_back(nums[right]);
                right++ ; 
            }
        }
        while(left <= mid){
            temp.push_back(nums[left]);
                left++ ; 
        }
        while(right <= high){
              temp.push_back(nums[right]);
                right++ ; 
        }
        for(int i = low ; i<= high ; i++){
            nums[i] = temp[i-low];
        }
    
     }
    int reversepair(vector<int>& nums, int low, int mid, int high) {
        int right = mid+1;
        int cnt = 0 ; 
        for (int i = low; i <=mid; i++) {
            while (right <= high && (long long)nums[i] > 2LL * nums[right])
                right++;
            cnt += (right - (mid + 1));
        }
        return cnt;
    }
    int mar(vector<int>& nums, int low, int high) {
        int cnt = 0;
        if (low >= high)
            return cnt;
        
        int mid = (low + high) / 2;
        cnt += mar(nums, low, mid);
        cnt += mar(nums, mid + 1, high);
        cnt += reversepair(nums, low, mid, high);
        marge(nums, low, mid, high);
        return cnt ; 
    }
    int reversePairs(vector<int>& nums) { 
        return mar(nums, 0, nums.size() - 1);
    }
};