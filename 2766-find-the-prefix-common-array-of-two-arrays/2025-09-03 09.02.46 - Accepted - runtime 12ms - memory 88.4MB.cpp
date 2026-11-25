class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
       int n=A.size();
       unordered_set<int>st;
       int cnt=0;
       vector<int>ans;
       for(int i=0;i<n;i++){
        if(st.find(A[i])!=st.end()){
            cnt++;
            
        }else{
            st.insert(A[i]);
        }
        if(st.find(B[i])!=st.end()){
            cnt++;
        }else{
            st.insert(B[i]);
        }
        ans.push_back(cnt);

       }
       
       return ans;
    }
};