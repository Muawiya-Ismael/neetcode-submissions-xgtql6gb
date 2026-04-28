class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        max_profit, l = 0, 0
        for r in range(1, len(prices)):
            if prices[l] > prices[r]:
                l = r
            max_profit = max((prices[r] - prices[l]), max_profit)
        return max_profit