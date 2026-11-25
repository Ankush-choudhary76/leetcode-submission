class Solution {
public:
    char repeatedCharacter(string s) {
        map<char,int >mpp;
        for(int i=0 ; i<s.size();i++){
            auto it = s[i];
            if(mpp.find(it)!= mpp.end()){
                return it ;
            }
            mpp[it]++;
        }
        return 'A';
    }
};