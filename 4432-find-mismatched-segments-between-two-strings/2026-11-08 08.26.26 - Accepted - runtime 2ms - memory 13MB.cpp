class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>>arr ; 
        int n = s1.size() ; 
        bool flag = false  ; 
        string str1="" , str2 ="" ; 
        for(int i=0 ; i<n ; i++){
            
            if(s1[i]!=s2[i]){
                str1+=s1[i] ; 
                str2+=s2[i] ; 
                flag = true ; 
            }else if(flag==true){
                arr.push_back({str1 , str2}) ;
                str1 ="" ;
                str2 ="";
                flag = false ; 
            }
        }
        if (flag) {
            arr.push_back({str1, str2});
        }
        return arr ; 
    }
};