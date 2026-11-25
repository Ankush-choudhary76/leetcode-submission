class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int s = 0 , tg =0 , cg =0 ;

        for(int i=0 ; i<gas.size() ;i++){
            int f= gas[i]-cost[i];

            tg +=f ; 
            cg += f;

            if(cg <0){
                cg=0 ;
                s=i+1 ; 
            }
        }
        return tg <0 ? -1 :s ;
    }
};