class Solution {
public:
    int minInsertions(string s) {
        int o =0 ,c=0 ;

        for(auto it : s){
            if(it=='('){
                if(c%2==1){
                    o++ ; c--;
                }
                c+=2 ; 
            }
            else{
                c-- ; 
                if(c<0){
                    o++;
                    c=1 ;  
                }
                
            }
        }
        return  o+c ; 
    }
};