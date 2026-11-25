class Solution {
public:
    vector<string> createGrid(int m, int n) {
         vector<string>arr ; 
         bool flag = true ;
         for(int i=0 ; i< m ;i++){
            string str ; 
            for(int j=0 ; j<n;j++){
               if(flag || j==n-1){
                str+='.';
               }else{
                str+='#';
               }
            }
            flag= false ; 
            arr.push_back(str) ; 
         }
        return arr ; 
    }
};