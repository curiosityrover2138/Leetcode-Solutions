class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int empty = 0,full = numBottles,ans = 0;
        while(empty<numExchange && full!=0){
            ans += full;
            int total = full + empty;
            full = total / numExchange;
            empty = total - full * numExchange;
        }
        return ans;
    }
};
