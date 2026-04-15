class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0;
        int minP = prices[0];

        for(int& price: prices){
            maxP = max(maxP, price - minP);
            minP = min(minP, price);
        }

        return maxP;
    }
};
