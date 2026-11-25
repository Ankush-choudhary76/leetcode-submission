class Solution {
public:
    int countEven(int num) {
        int cnt = 0, dig = num;

        while(dig > 0){
            cnt += dig % 10;
            dig /= 10;
        }
        return ((cnt & 1) == 0) ? num/2 : (num-1)/2;
    }
};