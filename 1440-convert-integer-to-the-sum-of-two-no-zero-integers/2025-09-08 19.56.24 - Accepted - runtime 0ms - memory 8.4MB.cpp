class Solution {
public:
    bool check(int n){
        while (n > 0){
            if (n % 10 == 0){
                return false;
            }
            n /= 10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
       for (int j = 1; j < n; j++){
            int i = n - j;
            if (check(i) && check(j)){
                return {i, j};
            }
        }
        return {};
    }
};