class Solution {
public:
    string sortSentence(string s) {
        stringstream ss;
        ss << s;
        string t;
        map<int, string> mpp;
        while (ss >> t) {
            int a = t.back() - '0';
            t.pop_back();
            mpp[a] = t;
        }
        t.clear();
        for(auto it : mpp){
            t+=it.second ;
            t+=" ";
        }
        t.pop_back();
        return t ;
    }
};