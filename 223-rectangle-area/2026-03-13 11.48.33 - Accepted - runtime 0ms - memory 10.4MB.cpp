class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
         
        int area1 = (ax2 - ax1) * (ay2 - ay1);
        
        int area2 = (bx2 - bx1) * (by2 - by1);

       
        int blx = max(ax1, bx1);
        int bly = max(ay1, by1);

        int trx = min(ax2, bx2);
        int tryy = min(ay2, by2);

        int width = trx  - blx;
        int height = tryy - bly;
        int intersectingArea = height * width;

        if(width <= 0 || height <= 0)
            intersectingArea = 0;

        return area1 + area2 - intersectingArea;
    }
};