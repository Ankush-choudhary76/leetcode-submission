class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
       double maxi = INT_MIN ; 
       int sum = 0 ;  
       for(auto it : dimensions){
           int l = it[0];
           int w = it[1];
        
        long long val = 1LL * l * l + 1LL * w * w;   
        int area = l * w;

        if(maxi < val || (maxi == val && area > sum)){  
            maxi = val;
            sum = area; 
        }
       
       }
       return sum ; 
    }
};