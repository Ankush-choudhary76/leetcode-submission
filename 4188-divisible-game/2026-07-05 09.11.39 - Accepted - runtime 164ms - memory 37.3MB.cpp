class Solution {
public:
    int mod = 1e9+7;
    int divisibleGame(vector<int>& nums) {
        vector<int>r = nums ; 
            unordered_set<int>st;

        for(auto it: r){
            for(int i=1 ; 1LL* i* i<= it;i++){
                if(it%i==0){
                    if(i>1)st.insert(i);
                    int x = it/i;
                    if(x>1)st.insert(x);
                }
            }
        }
        vector<int>c(st.begin() , st.end());

        long long bd = LLONG_MIN;
       int bk  =  INT_MAX ;
        for(auto it : c){
            long long cur = LLONG_MIN;
            long long mx = LLONG_MIN;
            for(auto p : nums){
                long long v = (p%it==0)? p : -1LL*p;
                if(cur<0){
                   cur = v ;  
                }else{
                    cur +=v;
                }
                mx = max(mx , cur);
            }
            if(mx >bd || (mx==bd && it < bk)){
                bd = mx ;
                bk = it ; 
            }
        }
        int mn  = *min_element(nums.begin() , nums.end());
        long long d= -1LL*mn;
        int k= 2 ; 
        while(st.count(k))k++;
        if(d>bd || (d==bd && k< bk)){
            bd = d ;
            bk = k ;
        }
        return ( 1LL *((bd% mod +mod)%mod)*bk)%mod ; 
    }
};