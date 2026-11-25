class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        int n = nums.size();
        vector<int>arr={-1 , -1}; 
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<n ;j++){
                int a = abs(i-j);
                int b =abs(nums[i]-nums[j]);
                if(a>=indexDifference  && b >=valueDifference){
                      arr[0] = i;
                      arr[1] = j;
                }
            }
        }
        return arr ; 
    }
};