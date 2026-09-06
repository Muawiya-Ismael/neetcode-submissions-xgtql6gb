class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        max_prof, min_buy = 0, prices[0]
        for price in prices:
            min_buy = min(min_buy,price)
            max_prof = max(price-min_buy,max_prof)
        return max_prof 