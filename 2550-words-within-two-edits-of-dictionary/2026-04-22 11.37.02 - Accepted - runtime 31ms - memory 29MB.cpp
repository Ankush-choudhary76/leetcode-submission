class Solution {
public:
    bool fun(string str ,vector<string>arr ){
            for(auto it : arr){
                int cnt = 0 ; 
                int i=0 ; 
                while(i<str.size()){
                    if(str[i]!=it[i]){
                        cnt++;
                    }
                    i++; 
                }
                if(cnt <=2) return true ;
            }
            return false  ; 
    }
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string>arr;
        unordered_set<string>st ; 
         for(auto it : dictionary ){
            st.insert(it);
        }

        for(auto it :queries ){
            if(st.find(it)!=st.end()){
                arr.push_back(it);
            }else if (fun(it,dictionary)){
              
                arr.push_back(it);
               
            }
        }
        return arr ;        
    }
};