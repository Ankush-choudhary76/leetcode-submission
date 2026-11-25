class Solution {
public:
    int balancedStringSplit(string s) {
        int ans=0 , cntl =0 , cntr = 0;
        for(int i=0 ;i<s.size();i++){
            if(s[i]== 'R') cntr ++;
            else cntl++;

            if(cntl == cntr){ 
                ans ++ ;
                cntr =0 ;
                cntl =0 ;
            }
        }
        return ans ;
    }
};