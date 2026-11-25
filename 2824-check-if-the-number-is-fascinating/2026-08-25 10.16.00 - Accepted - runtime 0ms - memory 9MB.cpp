class Solution {
public:
    bool isFascinating(int n) {
        int two = n * 2;
        int three = n * 3;

        string str = to_string(n);
        str += to_string(two);
        str += to_string(three);

        int freq[10] = {0};

        for(auto  it : str) {
            freq[it - '0']++;
        }

        
        if(freq[0] != 0)
            return false;

     
        for(int i = 1; i <= 9; i++) {
            if(freq[i] != 1)
                return false;
        }

        return true;
    }
};