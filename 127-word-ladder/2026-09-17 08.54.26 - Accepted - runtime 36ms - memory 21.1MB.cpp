class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string , int>>q ; 
        unordered_set<string>st(wordList.begin() , wordList.end()); 

        q.push({beginWord , 1 }); 

        while(!q.empty()){
            string str = q.front().first ; 
            int v = q.front().second ;
            q.pop(); 

            if(str == endWord) return  v ; 

            for(int i= 0 ; i<str.size() ; i++){
                char ch = str[i];
                for(char j ='a' ; j<='z';j++){
                    str[i]=j;
                    if(st.find(str)!= st.end()){
                        q.push({str , v+1});
                        st.erase(str);
                    }
                }
                str[i]= ch ; 

            }
        }
        return 0 ;
    }
};