class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
    int take = 0 ; 
        int n = colors.size();
       int last = 0 ; 
        for(int i=0; i<n ;i++){
           if(i>0 && colors[i-1]==colors[i]){
                if(last>=neededTime[i] ){
                    take +=neededTime[i];
                    
                }else{
                    take += last ;
                    last = neededTime[i] ;
                }
           }else{
            last =neededTime[i];
           }
        }
        return take ; 
       
    }
};