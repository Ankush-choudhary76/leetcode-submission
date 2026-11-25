class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi = INT_MIN , mini = INT_MAX; 

        for(auto it : nums){
            maxi = max(maxi , it);
            mini = min(mini , it);
        } 
        while(mini){
            int a = maxi % mini ; 
            maxi = mini ; 
            mini =a ;
        }
        return maxi ; 
    }
};