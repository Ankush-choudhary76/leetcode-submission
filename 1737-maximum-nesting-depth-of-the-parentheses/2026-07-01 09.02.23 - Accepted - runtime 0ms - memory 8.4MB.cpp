class Solution {
public:
    int maxDepth(string s) {
        int cnt =0 , maxi=INT_MIN; 

        for(auto it : s){
            if(it=='(')cnt++;
            if(it==')')cnt--;
            maxi = max(cnt , maxi );
        }
        return maxi ; 
    }
};