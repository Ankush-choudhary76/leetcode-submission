class Solution {
public:
    int minCostClimbingStairs(vector<int>& arr) {
        int n = arr.size(); 
        int prev2 = 0;
        int prev1 = 0; 
        
        for(int i=0 ; i<n;i++){
            if(i<2){
                prev2 = prev1 ; 
                prev1 = arr[i];
            }else{
            int cur = arr[i]+ min(prev2 , prev1);
                 prev2 = prev1 ;
                 prev1 = cur;
            }
        }
        return min(prev2 , prev1);
    }
};