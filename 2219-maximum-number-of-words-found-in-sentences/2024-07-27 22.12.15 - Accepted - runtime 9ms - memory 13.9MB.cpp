class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi =INT_MIN;
        for( auto it : sentences){
            int cnt  =0; 
           for(auto s : it){
            if( s == ' ') cnt ++;
           }
           maxi = max(++cnt , maxi);
        }
        return maxi ;
    }
};