class Solution {
public:
  static  int bitlen(int x) {
    return log2(x) + 1;
}

static bool cmp(int a, int b) {
    int lenA = bitlen(a);
    int lenB = bitlen(b);

    long long ab = ((long long)a << lenB) | b;
    long long ba = ((long long)b << lenA) | a;

    return ab > ba;
}

int maxGoodNumber(vector<int>& nums) {

    sort(nums.begin(), nums.end(), cmp);

    long long res = 0;

    for (auto  it  : nums) {
        int len = bitlen(it );
        res = (res << len) | it ;
    }

    return res;
}
};