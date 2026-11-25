class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<int>first(26 , -1 ) , last(26, -1);

        for(int i=0 ; i<s.size() ; i++){
            if(first[s[i]-'a']== -1){
                first[s[i]-'a'] = i;
            }
            last[s[i]-'a']=i ; 
        }
        
        int result =0 ; 
        for(int i = 0 ; i<26 ; i++){
            if(first[i]==-1 || first[i]==last[i]) continue ; 
             vector<bool>seen(26,false);

             for(int j = first[i]+1 ; j<last[i];j++){
                seen[s[j]-'a']=true ; 
            }
            result +=count(seen.begin() , seen.end() , true );
        }
    return result ; 
    }
};