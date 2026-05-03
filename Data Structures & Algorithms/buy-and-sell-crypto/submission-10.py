class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        max_profit, buy = 0, prices[0]
        for i in range(1, len(prices)):
            if  prices[i] - buy > max_profit:
                max_profit = prices[i] - buy
            else:
                buy = min(prices[i], buy)
        return max_profit