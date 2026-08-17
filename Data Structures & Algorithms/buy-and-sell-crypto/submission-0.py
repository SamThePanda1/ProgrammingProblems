class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minimum = 10000 
        profit = 0
        for i in range(len(prices)):
            if prices[i] < minimum:
                minimum = prices[i]
            if profit < (prices[i]-minimum):
                profit = prices[i]-minimum
        return profit