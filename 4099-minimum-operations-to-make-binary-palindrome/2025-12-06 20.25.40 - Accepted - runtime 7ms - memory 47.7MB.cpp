class Solution {
public:
    vector<int> minOperations(vector<int>& nums) {
       static const vector<int>pal = []() {
           vector<int>p ; 
           auto it = [](int n ){
               if(n==0 ) return true ;
               vector<int>bits; 
               while(n>0){
                   bits.push_back(n&1);
                   n>>= 1 ; 
               }
               int l = 0 , r= bits.size()-1 ; 
               while(l<r){
                   if(bits[l++]!=bits[r--]) return false ; 
                   
               }
               return true ;
           };
           for(int i=0 ; i<=10000;i++){
               if(it(i)){
                   p.push_back(i);
               }
           }
           return p ; 
       }();
        
        vector<int>ans ; 
        for(int x : nums){
            auto it = lower_bound(pal.begin() , pal.end() , x );
            int minops = 20000;
            if(it!= pal.end()){
                minops = min(minops , abs(*it - x));
            }
            if(it!= pal.begin()){
                minops = min(minops , abs(*prev(it)-x));
            }
            ans.push_back(minops);
        }
        return ans ; 
    }
};