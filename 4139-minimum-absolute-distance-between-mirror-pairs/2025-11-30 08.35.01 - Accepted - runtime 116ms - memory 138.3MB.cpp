class Solution {
public:
     long long rev(long long n){
         long long r = 0 ; 
         while(n>0){
             r = r*10 + (n%10);
             n/=10; 
         }
         return r ; 
     }
    int minMirrorPairDistance(vector<int>& nums) {
       unordered_map<long long , int>mpp ; 
        long long ans = -1 ; 
        for(int i=0 ; i<nums.size(); i++){
            long long x = nums[i]; 
            long long rx =rev(x); 

            if(mpp.count(x)){
                long long d = i - mpp[x]; 
                if(ans==-1 || d<ans) ans = d ;
            
            }
             mpp[rx] = i ; 
        }
        return (int)ans ; 
    }
};