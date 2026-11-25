class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
      int  n = indices.size();
      string str;
      map<int,int>mpp;
      for(int i=0 ; i<n;i++){
        mpp[indices[i]] = s[i];
      }
      for(auto it : mpp){
        str.push_back(it.second);
      }
      return str ;

    }
};