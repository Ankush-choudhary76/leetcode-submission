class RandomizedCollection {
public:
    vector<int> nums;
    unordered_map<int, unordered_set<int>> mpp;

    RandomizedCollection() {

    }

    bool insert(int val) {

        bool np = mpp[val].empty();

        mpp[val].insert(nums.size());
        nums.push_back(val);

        return np;
    }

    bool remove(int val) {

        if (mpp[val].empty())
            return false;

        int i = *mpp[val].begin();
        int l = nums.back();

        mpp[val].erase(i);

        if (i != nums.size() - 1) {

            nums[i] = l;

            mpp[l].erase(nums.size() - 1);
            mpp[l].insert(i);
        }

        nums.pop_back();

        return true;
    }

    int getRandom() { 
        return nums[rand() % nums.size()]; 
    }
};
/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */