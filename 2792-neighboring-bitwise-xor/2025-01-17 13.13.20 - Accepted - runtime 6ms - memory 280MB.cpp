class Solution {
public:

bool checkValid(const vector<int>& derived, int initial) {
    int n = derived.size();
    vector<int> original(n);
    original[0] = initial;

  
    for (int i = 1; i < n; i++) {
        original[i] = derived[i - 1] ^ original[i - 1];
    }
 
    return (derived[n - 1] == (original[n - 1] ^ 
   original[0]));
}

bool doesValidArrayExist(vector<int>& derived) {
    return checkValid(derived, 0) || checkValid(derived, 1);
}
};