class Solution {
public:
    vector<int>arr ;
    void fun(int n ){
        vector<int>nums ; 
        while(n>0){
            int temp = n%10 ; 
            nums.push_back(temp);
            n/=10 ; 
        }
        reverse(nums.begin() , nums.end());
        for(auto it : nums){
            arr.push_back(it);
        }
    }
    vector<int> separateDigits(vector<int>& nums) {
        int n = nums.size();

        for(auto it : nums){
            
            fun(it );

        }return arr ; 

    }
};