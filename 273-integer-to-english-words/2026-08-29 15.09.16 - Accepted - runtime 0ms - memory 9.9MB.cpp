class Solution {
public:

    string ones[20] = {"", " One", " Two", " Three", " Four", " Five", " Six", " Seven", " Eight", " Nine", " Ten", " Eleven", " Twelve", " Thirteen", " Fourteen", " Fifteen", " Sixteen", " Seventeen", " Eighteen", " Nineteen"};
    string tens[10] = {"", " Ten", " Twenty", " Thirty", " Forty", " Fifty", " Sixty", " Seventy", " Eighty", " Ninety"};
    string thousands[4] = {"", " Thousand", " Million", " Billion"};
    
    string fun(int n) {
        if (n < 20) 
            return ones[n];
        if (n < 100) 
            return tens[n / 10] + fun(n % 10);
        if (n < 1000) 
            return fun(n / 100) + " Hundred" + fun(n % 100);
        for (int i = 3; i >= 0; i--) {
            if (n >= pow(1000, i)) {
                return fun(n / pow(1000, i)) + thousands[i] + fun(n % (int)pow(1000, i));
            }
        }
        return "";
    }

    string numberToWords(int num) {
        
        if (num == 0) 
            return "Zero";
        return fun(num).substr(1);
    }
};