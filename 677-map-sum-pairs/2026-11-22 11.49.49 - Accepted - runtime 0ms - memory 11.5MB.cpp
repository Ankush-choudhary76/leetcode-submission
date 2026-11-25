class MapSum {
    unordered_map<string, int> mpp;
public:
    MapSum() {    
    }
    
    void insert(string key, int val) {
        mpp[key]= val ; 
    }
    
    int sum(string prefix) {
       int tot =0 ; 
       for(auto [key , val] : mpp){
            if(key.size() >= prefix.size() && key.compare(0 , prefix.size() , prefix)==0 ){
                tot+=val;
            }
        }
        return tot ; 
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */