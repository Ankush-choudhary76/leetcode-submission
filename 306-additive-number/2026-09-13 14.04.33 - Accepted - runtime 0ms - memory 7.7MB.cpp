class Solution {
public:

    string fun(string a, string b) {

        string ans = "";

        int i = a.size() - 1;
        int j = b.size() - 1;

        int car = 0;

        while(i >= 0 || j >= 0 || car) {

            int sum = car;

            if(i >= 0) {
                sum += a[i] - '0';
                i--;
            }

            if(j >= 0) {
                sum += b[j] - '0';
                j--;
            }

            ans.push_back((sum % 10) + '0');

            car = sum / 10;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }

    bool isAdditiveNumber(string num) {

        int n = num.size();

        for(int i = 1; i <= n - 2; i++) {

            if(num[0] == '0' && i > 1)
                break;

            string a = num.substr(0, i);

            for(int j = i + 1; j <= n - 1; j++) {

                if(num[i] == '0' && j - i > 1)
                    break;

                string b = num.substr(i, j - i);

                int pos = j;

                int count = 2;

                string x = a;
                string y = b;

                while(pos < n) {

                    string sum = fun(x, y);

                    int len = sum.size();

                    if(pos + len > n)
                        break;

                    if(num.compare(pos, len, sum) != 0)
                        break;

                    pos += len;

                    x = y;
                    y = sum;

                    count++;
                }

                if(pos == n && count >= 3)
                    return true;
            }
        }

        return false;
    }
};