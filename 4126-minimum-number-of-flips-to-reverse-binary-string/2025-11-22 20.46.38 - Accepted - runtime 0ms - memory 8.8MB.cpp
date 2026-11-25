class Solution {
public:
    int minimumFlips(int n) {
         string s ="";
        int f1 = 0 , f2 = 0 ; 
        while(n>0){
            s += (n%2)+'0';
            n /=2 ;
        }
        reverse(s.begin() , s.end());
        int f = 0 ; 
        
       int i =0 , j = s.size()-1 ; 
        while(i <j){
            if(s[i]!=s[j])f++;
            i++;
            j--;
        }
        return f*2 ; 
    }
};