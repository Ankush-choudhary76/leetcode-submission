class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int n =nums.size() ; 
        int pi = 0 ;

        for(int i=0 ; i<n-1;i++){
            if(nums[i]>nums[i+1]){
                pi = i ; 
                break ;
            }
            if(i==n-2) pi =n-1; 
        }
        long long  as =0 ;
        long long ds = 0 ; 

        for(int i=0 ;i<=pi;i++){
            as +=nums[i];
        }
        for(int i=pi ;i<n;i++){
            ds +=nums[i];
        }
        if(as>ds) return 0 ;
        if(ds>as) return 1 ;
        return -1 ; 
    }
};