class Solution {
public:
    bool divideArray(vector<int>& nums) {
        vector<int>arr(501 , 0);

        for(auto it : nums){
            arr[it]++;
        }
    int cnt =0 ; 
         for(auto it : arr){
            if(it!=0 && it%2==0) cnt+=it/2;
        }
        return cnt== (nums.size()/2);
    }
};