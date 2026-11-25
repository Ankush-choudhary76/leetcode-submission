class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int n = digits.size();
    vector<int> arr;
    int carry = 1;  // we have to add one

    for(int i = n - 1; i >= 0; i--) {
        int sum = digits[i] + carry;
        arr.push_back(sum % 10);  // last digit
        carry = sum / 10;         // carry for next digit
    }

    if (carry) {
        arr.push_back(carry);  // in case there's a leftover carry (like 999 + 1 = 1000)
    }

    reverse(arr.begin(), arr.end());
    return arr;
}
};