class Solution {
public:
    int countGroups(vector<int>& position, vector<int>& speed, int distance) {
        int n = position.size() ; 
        int g=1 , r=n-1 ,  l = n-1 ;
        
        for(int i=n-2 ; i>=0;i--){
            long long gap =  position[l]-position[i];

            if(gap <= distance || speed[i]> speed[r]){
               l= i ;
            }else{
                g++; 
                r=i;
                l=i ; 
            }
        }
        return g ;
    }
};