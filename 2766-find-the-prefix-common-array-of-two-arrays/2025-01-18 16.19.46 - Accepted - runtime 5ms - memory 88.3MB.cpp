class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        unordered_set<int>ss;
        vector<int>arr;
         int cc = 0 ;
        for(int i= 0 ; i<n;i++){
              if(ss.find(A[i])!=ss.end()) cc++;
              else ss.insert(A[i]);
                if(ss.find(B[i])!=ss.end()) cc++;
              else ss.insert(B[i]);
              arr.push_back(cc);
        }
          
          return arr ; 
    }    
       
    
};