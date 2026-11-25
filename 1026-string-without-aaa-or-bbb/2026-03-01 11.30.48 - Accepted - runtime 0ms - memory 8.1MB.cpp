class Solution {
public:
    string strWithout3a3b(int a, int b) {
       string str  = "";

        while (a > 0 || b > 0) {

            int n = str .size();

            if (n >= 2 && str[n-1] == str[n-2]) {

                if (str[n-1] == 'a') {
                    str += 'b';
                    b--;
                } else {
                    str += 'a';
                    a--;
                }

            } 
            else {

              
                if (a >= b && a > 0) {
                    str += 'a';
                    a--;
                } else {
                    str += 'b';
                    b--;
                }
            }
        }

        return str;
    }
};