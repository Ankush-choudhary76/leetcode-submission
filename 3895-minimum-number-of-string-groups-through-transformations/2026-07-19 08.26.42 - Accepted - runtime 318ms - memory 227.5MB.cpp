class Solution {
public:
    string fun (string s){
        int n = s.size();
        if(n==0)return "";
        s+=s; 
        int i=0 , j=1 ; 

        while(i<n && j<n){
            int k=0 ;
            while(k<n && s[i+k]==s[j+k]) k++;
            if(k==n)break ; 
            if(s[i+k]>s[j+k]){
                i=i+k+1 ; 
                if(i==j)i++;
            }else{
                j=j+k+1;
                if(i==j)j++;
            }
        }
        int a = min(i,j);
        return s.substr(a,n);
    }
    int minimumGroups(vector<string>& words) {
        unordered_set<string>st ; 

        for(auto it : words){
            string a , b ;
            for(int i=0 ; i<it.size() ; i++){
                if(i&1){
                    a+=it[i];
                }else{
                    b+=it[i];
                }
            }
            string str = fun(a)+'#'+fun(b);
            st.insert(str);
        }
        return st.size();
    }
};