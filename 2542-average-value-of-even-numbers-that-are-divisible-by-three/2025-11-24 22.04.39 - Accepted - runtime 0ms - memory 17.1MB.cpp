class Solution {
public:
    int averageValue(vector<int>& nums) {
       int val = 0 ,cnt =0  ; 
       for(auto it : nums){
        if(it%3==0 && it%2==0){
            val += it ;
            cnt++;
        }
       } 
       return cnt !=0 ? (int)val/cnt : val;
    }
};