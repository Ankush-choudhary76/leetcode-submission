class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int>arr;
        for(int i= 0 ; i<n;i++){
          
              int a = i ,b=i , cnt=0;

            while(a!=-1){
                if(A[a]==B[b]){
                    cnt++;
                }
                 b--;
                 if(b<0){
                    a--;
                    b=i;
                 }  
            }
            arr.push_back(cnt);
            cnt = 0 ; 
        }
            return arr; 
        }
       
    
};