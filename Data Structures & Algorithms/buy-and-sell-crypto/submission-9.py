class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        prof, buy = 0 , prices[0]
        for val in prices:
            buy = min(buy, val)
            prof = max(val - buy, prof)
        return prof
        