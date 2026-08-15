import math
class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        
        rate = 1
        r = max(piles)
        l = 1
        res = rate
        while(l<=r):
            rate = (l+r)//2
            hours = h
            for p in piles:
                hours -= math.ceil(float(p)/rate)
            
            
            if hours<0:
                l = rate
                l+=1
              
                continue
            if hours>=0:
                r = rate
                r-=1
                res = rate
            
        return res