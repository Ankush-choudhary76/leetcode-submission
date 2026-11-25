class Solution {
public:
    string sortSentence(string s) {
        stringstream ss;
        ss << s;
        string t;
       vector<string>arr(201);
        while (ss >> t) {
            int a = t.back() - '0';
            t.pop_back();
            arr[a] = t ; 
        }
        t.clear();
        for(auto it : arr){
             if(!it.empty()){
            t+=it ;
            t+=" ";
            }
        }
        t.pop_back();
        return t ;
    }
};