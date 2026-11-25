class Solution {
public:
    bool fun(vector<int>& arr , int ind ,vector<int>&dp ){
        if(ind<0 || ind>=arr.size()|| dp[ind]) return false ;

         if(arr[ind]==0) return true ;
        dp[ind]=1;
        return fun(arr , ind+arr[ind] , dp) || fun(arr , ind-arr[ind] , dp);
    }
    bool canReach(vector<int>& arr, int start) {
        vector<int>dp(arr.size(),0);
        return fun(arr , start ,  dp);
    }
};