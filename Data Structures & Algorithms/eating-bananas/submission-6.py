import math
class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        
        rate = 1
        r = max(piles)
        l = 1
        res = rate
        while(l<=r):
            rate = (l+r)//2
            total = 0
            for p in piles:
                total += math.ceil(float(p)/rate)
            
            if total<= h:
                res = rate
                r = rate- 1
            else:
                l = rate + 1
            
        return res