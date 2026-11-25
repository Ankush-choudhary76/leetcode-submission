class Solution {
public:
    string intToRoman(int num) {
        string on[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string te[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hr[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string th[]={"","M","MM","MMM"};
        
        return th[num/1000] + hr[(num%1000)/100] + te[(num%100)/10] + on[num%10];
    }
};