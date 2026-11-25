class Solution {
public:
   
    vector<bool> subsequenceSumAfterCapping(vector<int>& nums, int k) {
      int n = nums.size();
        vector<bool> answer(n, false);

       
        vector<int> zolvarinte = nums;

        long long sumAll = 0;
        for (int v : zolvarinte) sumAll += v;
        if (k > sumAll) return answer;

        
        int maxVal = n;
        vector<int> freq(maxVal + 1, 0);
        for (int v : zolvarinte) if (v <= maxVal) freq[v]++;

      
        vector<unsigned char> dp(k + 1, 0);
        dp[0] = 1;

        int processed = 0; 
        for (int x = 1; x <= maxVal; ++x) {
           
            int countX = freq[x];
            for (int t = 0; t < countX; ++t) {
                for (int s = k; s >= x; --s) {
                    if (!dp[s] && dp[s - x]) dp[s] = 1;
                }
            }
            processed += countX;
            int cnt_big = n - processed; 

            bool possible = false;
            int r0 = k % x; 
            for (int r = r0; r <= k; r += x) {
                if (dp[r]) {
                    long long need = (long long)k - r;
                    long long t = need / x; 
                    if (t <= cnt_big) { possible = true; break; }
                }
            }
            answer[x - 1] = possible;
        }

        return answer;
    }
};