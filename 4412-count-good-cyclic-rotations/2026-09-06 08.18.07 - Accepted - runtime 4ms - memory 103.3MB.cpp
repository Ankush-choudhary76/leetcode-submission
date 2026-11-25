class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int half = nums.size()/2; 

        long long tot = 0  , hp =0 ; 

        for(int i=0 ; i<nums.size();i++){
            tot+=nums[i];
            if(i<half){
                hp +=nums[i];
            }
        }
        int ans =0 ;
        int n = nums.size();
        for(int  i=0 ; i<n;i++){
            if(2* hp >tot)ans++ ;

            hp-=nums[i];
            hp+=nums[(i+half)%n];
        }
        return ans ; 
    }
};