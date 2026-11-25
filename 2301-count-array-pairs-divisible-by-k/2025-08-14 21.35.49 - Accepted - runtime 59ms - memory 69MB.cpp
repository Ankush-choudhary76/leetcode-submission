class Solution {
public:
  int mod = 1e9-7 ;
    long long countPairs(vector<int>& nums, int k) {
          unordered_map<int, int> freq;
    long long cnt = 0;

    for (int num : nums) {
        int g = gcd(num, k); 
        for (auto& [g2, f] : freq) {
            if ((1LL * g * g2) % k == 0) {
                cnt += f; 
            }
        }
        freq[g]++;
    }
    return cnt;
    }
};