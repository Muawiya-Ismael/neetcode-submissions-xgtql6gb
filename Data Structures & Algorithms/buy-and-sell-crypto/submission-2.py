class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit, pay= 0, 0
        for i in range(len(prices)):
            if  prices[pay] > prices[i]:
                pay = i
            profit = max(prices[i] - prices[pay], profit)
        return profit