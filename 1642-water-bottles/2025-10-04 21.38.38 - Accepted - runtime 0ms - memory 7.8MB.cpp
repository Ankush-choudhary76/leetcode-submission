class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int val = numBottles ; 
        while(numBottles >= numExchange){
            if(numBottles % numExchange==0){
                val += numBottles / numExchange;
                numBottles=  numBottles / numExchange;
            }else{
                 val += numBottles / numExchange;
                 int s = numBottles % numExchange;
                numBottles = (numBottles / numExchange )+s;

            }
        }
        return val ; 
    }
};