class Solution {
public:
    void rotatenum(vector<int>&nums , int  i, int j ){
        while(i <j){
            swap(nums[i],nums[j]);
            i++ ; j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n ;
        rotatenum(nums , 0 , n-1 );
        rotatenum(nums , 0 , k-1);
        rotatenum(nums , k , n-1);
    }
};