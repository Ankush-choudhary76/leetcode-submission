class Trie {
public:
     unordered_set<string>st ; 
    Trie() {
        
    }
    
    void insert(string word) {
      st.insert(word);  
    }
    
    bool search(string word) {
        for(auto it : st){
            if(it==word){
                return true ; 
            }
        }
        return false ; 
    }
    
    bool startsWith(string prefix) {
        for(auto it : st){
            string a = it.substr(0 , prefix.size());
            if(a == prefix){
                return true ; 
            }
        }
        return false ; 
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */