class Solution {
public:
    string convertToTitle(int col) {
        string str = "";
        while (col > 0) {
            col--;
            str = char(col % 26 + 'A') + str;
            col/= 26;
        }
        return str;
    }
};