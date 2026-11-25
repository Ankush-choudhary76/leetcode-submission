class RandomizedSet {
public:
    vector<int>nums ; 
    unordered_map<int,int>mpp;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mpp.count(val))return false ; 
        mpp[val]=nums.size();
        nums.push_back(val); 
        return true ;
    }
    
    bool remove(int val) {
        if(!mpp.count(val)) return false ; 

        int i = mpp[val];
        int l = nums.back();

        mpp[l]=i ; 
        nums[i]=l ; 
        nums.pop_back();
        mpp.erase(val);
        return true ; 
    }
    
    int getRandom() {
         int i = rand() % nums.size();

        return nums[i];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */