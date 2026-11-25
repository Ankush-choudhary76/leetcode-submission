class Solution {
public:
    
    int fun(long long  n , int k){
       if(n<0) return -1 ;
        if(n==0)return 0 ;
        if(n==1) return 1 ;
        long long low =1 , high = n  ,ans =1 ;
        while(low<=high){
            long long mid = low+(high-low)/2;
            long long val =1 ;
            bool f =false ; 
            for(int i=0 ; i<k;i++){
                if(val >n/mid){
                    f=true ;
                    break ;
                }
                val *=mid;
                
            }
            if(!f && val<= n){
                ans = mid ; 
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return ans ; 
    }
    int countKthRoots(int l, int r, int k) {
        if(k==1) return r-l+1;
        return fun(r,k) - fun(l-1 ,k);
    }
};