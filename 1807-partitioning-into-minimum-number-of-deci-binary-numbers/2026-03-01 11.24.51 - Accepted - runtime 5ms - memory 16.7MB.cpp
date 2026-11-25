class Solution {
public:
    int minPartitions(string n) {
        char maxd = '0';
        for(char it : n)
            maxd = max(maxd, it );
        return maxd - '0';
    }
};