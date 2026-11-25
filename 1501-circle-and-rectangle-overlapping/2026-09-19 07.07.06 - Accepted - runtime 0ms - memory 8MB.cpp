class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int a = max(x1 , min(xCenter, x2));
        int b = max(y1 , min(yCenter , y2));

        int c = xCenter -a ;
        int d = yCenter - b ; 

        return c*c + d*d <= radius*radius ; 
    }
};