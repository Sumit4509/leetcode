class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sum =0;
        int left = 0;
        while(numBottles>0)
        {
            sum += numBottles;
            left += numBottles;
            numBottles = (left/numExchange);
            left = left%numExchange;
        }
        
        return sum;
    }
};