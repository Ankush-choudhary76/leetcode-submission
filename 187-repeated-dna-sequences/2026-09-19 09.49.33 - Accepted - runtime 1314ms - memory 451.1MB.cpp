class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string , int >mpp;
         vector<string>ans ; 
        for(int i=0 ; i+10<=s.size() ;i++){
            string str = s.substr(i,10); 
            mpp[str]++;
            if(mpp[str]==2) ans.push_back(str);
        }
        return ans ; 
    }
};