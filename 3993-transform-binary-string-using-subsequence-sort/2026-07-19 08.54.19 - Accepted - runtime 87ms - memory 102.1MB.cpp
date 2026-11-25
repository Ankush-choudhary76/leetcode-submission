class Solution {
public:
    vector<bool> transformStr(string s, vector<string>& strs) {
          int n = s.size() ; 
           vector<int>arr(n);

        int cnt =0 ; 

        for(int i=0 ; i <n ; i++){
            if(s[i]=='1')cnt++;
            arr[i]=cnt ;
        }
        int tot = cnt ; 
        vector<bool>ans ; 
        for(auto it : strs){
            int a=0 ,b=0 ; 

            for(auto p : it){
                if(p=='1')a++;
                else if(p=='?')b++; 
            }
           int r = tot-a ; 
            if(r<0 || r>b){
                ans.push_back(false);
                continue ; 
            }
            string aa = it ; 
            for(auto &p : aa){
                if(p=='?') p='0';
                
            }
            for(int i=n-1 ; i>=0  && r;i--){
                if(it[i]=='?'){
                    aa[i]='1' ;
                    r--;
                }
            }
            bool flag= true ; 
            int cnt =0 ; 
            
            for(int i=0 ; i<n;i++){
                if(aa[i]=='1')cnt++;

                if(cnt > arr[i]){
                    flag = false ;
                    break ; 
                }
            }
            ans.push_back(flag);
        }
        return ans ; 
    }
};