class Solution {
public:
    int compress(vector<char>& chars) {
       int i=0 ;
       int idx = 0;
       while(i<chars.size()){
             char ch = chars[i];
            int  cnt =0 ; 
            while(i<chars.size() && ch==chars[i]){
                cnt++;
                i++;
            }
            chars[idx++] = ch;
             if (cnt > 1) {
                string s = to_string(cnt);
                for (auto it   : s) {
                    chars[idx++] = it;
                }
            }
       }
       return idx ;  
    }
};