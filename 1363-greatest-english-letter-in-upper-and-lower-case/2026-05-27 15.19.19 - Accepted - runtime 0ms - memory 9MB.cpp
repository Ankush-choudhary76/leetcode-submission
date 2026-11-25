class Solution {
public:
    string greatestLetter(string s) {
        int n = s.size();
        vector<int>lower(26, 0);
        vector<int>upper(26,0);

        for(auto it : s){
            if(islower(it)){
                lower[it-'a']=1;
            }else{
                upper[it-'A']=1;
            }
        }
        string str;
        for(int i=25 ; i>=0 ; i--){
                 if(lower[i]==1 && upper[i]==1){
                    str+=i+'A';
                    break ; 
                 }
        }
        return str ; 
    }
};