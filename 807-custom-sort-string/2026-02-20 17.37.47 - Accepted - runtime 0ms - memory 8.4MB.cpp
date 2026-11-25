class Solution {
public:
    string customSortString(string order, string s) {
      unordered_map<char , int>mpp;
      for(auto it : order){
        mpp[it]=0;
      }
        for(auto it :s){
            if (mpp.find(it) != mpp.end()) {
                mpp[it]++;
            }
        }
        string str ; 
        for(auto it :order ){
             str.append(mpp[it] , it);
        }
        for(auto it :s){
            if (mpp.find(it) == mpp.end()) {
                str.push_back(it);
            }
        }
        return str ;
    }
};