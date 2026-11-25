class Solution {
public:
    int maxBalancedSubarray(vector<int>& nums) {
        map<pair<int,int>,int>mp;

        int xr =0 , bal = 0 , ans =0 ; 
        mp[{0,0}]=-1 ; 
        for(int i=0 ; i<nums.size();i++){
            xr^=nums[i];
            if(nums[i]%2==0){
                bal++;
            }else bal--;
            if(mp.count({xr,bal})){
                ans = max(ans , i- mp[{xr , bal}]); 
            }else{
                mp[{xr , bal}]= i ; 
            }
        }
        return ans ; 
    }
};