class Solution {
public:
    long long mod = 1e9 + 7;
     long long fun (long long x, long long y) {
        long long a = 1;

        while(y > 0) {
            if(y & 1) {
                a = (a * x) % mod;
            }

            x = (x * x) % mod;
            y = y / 2;
        }

        return a;
    }
    int sumDecoded(vector<long long>& nums) {
        vector<long long> arr = nums;
        long long ans = 0;

        for (auto it : nums) {
            int w = it % 10;
            long long d = it / 10;

            string str = to_string(d);

            long long x = stoll(str.substr(0, w));
            long long y = stoll(str.substr(w));

            long long a = fun(x,y);

            
            ans = (ans + a) % mod;
        }
        return ans;
    }
};