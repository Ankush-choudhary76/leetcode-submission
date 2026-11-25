class Solution {
public:
    bool judgeCircle(string moves) {
        int u = 0 , d =0 , l =0 , r =0 ; 
        for(auto it : moves){
            if(it=='U')u++;
            else if (it=='D')d++;
            else if (it=='L')l++;
            else r++;
        }
        return (l==r)&&(u==d);
    }
};