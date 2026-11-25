class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        auto it = make_pair(s,t);
        int n = s.size() , m=t.size();
        const int a = 1e9 ; 

        vector<int>left(n,a) , right(n,-1);
        int j=0 ; 
        for(int i=0 ; i<n ; i++){
            while(j<m && t [j] != s[i])j++;
            if(j==m)break ;
            left[i]=j;
            j++;
        }
        if(left[n-1]!= a )return true ; 

        j= m-1 ; 

        for(int i=n-1 ; i>=0 ; i--){
            while(j>=0 && t [j] != s[i])j--;
            if(j<0)break ;
            right[i]=j;
            j--;
        }
        for(int i=0 ; i<n ;i++){
            int l =-1 , r = m ;

            if(i>0){
                if (left[i-1]==a)continue ;
                l=left[i-1];
            }
            if(i+1<n){
                if (right[i+1]==-1)continue ;
                r=right[i+1];
            }
            if(l+1<r)return true ; 
        }
        return false ; 
    }
};