class Solution {
public:

bool checkValid(const vector<int>& derived, int initial) {
    int n = derived.size();
    vector<int> original(n);
    original[0] = initial;

    // Construct the original array based on the derived array
    for (int i = 1; i < n; i++) {
        original[i] = derived[i - 1] ^ original[i - 1];
    }

    // Check the last condition: derived[n-1] == original[n-1] ⊕ original[0]
    return (derived[n - 1] == (original[n - 1] ^ original[0]));
}

bool doesValidArrayExist(vector<int>& derived) {
    // Check both possibilities for original[0]: 0 and 1
    return checkValid(derived, 0) || checkValid(derived, 1);
}
};