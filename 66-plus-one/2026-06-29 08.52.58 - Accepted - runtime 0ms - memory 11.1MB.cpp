class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int n = digits.size();
    vector<int> arr;
    int carry = 1;  

    for(int i = n - 1; i >= 0; i--) {
        int sum = digits[i] + carry;
        arr.push_back(sum % 10);  
        carry = sum / 10;         
    }

    if (carry) {
        arr.push_back(carry);  
    }

    reverse(arr.begin(), arr.end());
    return arr;
}
};