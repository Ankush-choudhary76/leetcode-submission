class Solution {
public:
    int numSteps(string s) {
        int n = s.size();
        int cnt = 0;
        
        while(n > 1) {

            
            if(s[n-1] == '0') {
                s.pop_back();
                n--;
            }
           
            else {
                bool carryResolved = false;

                for(int i = n-1; i >= 0; i--) {
                    if(s[i] == '0') {
                        s[i] = '1';
                        carryResolved = true;
                        break;
                    } else {
                        s[i] = '0';
                    }
                }

                
                if(!carryResolved) {
                    s = '1' + s;
                    n++;
                }
            }

            cnt++;
        }

        return cnt;
    }
};