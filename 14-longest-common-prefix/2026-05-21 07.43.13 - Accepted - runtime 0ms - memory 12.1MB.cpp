class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n =strs.size();
        string str ="";
        sort(strs.begin() , strs.end());
         string a = strs[0] , b= strs[n-1];
        int i=0 ; 
        while(i<a.size() ){
             if(a[i]==b[i]){
                str+=a[i];
                i++;
             }else{
                break  ; 
             }
        }
        return str ; 
    }
};