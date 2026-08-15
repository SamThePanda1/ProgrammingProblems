class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l = 0
        mid = 0
        r = len(nums)-1
        while l<= r :
            mid = (l+r)//2
            if nums[mid]==target:
                return mid
                
            
            if nums[mid]>target:
                mid-=1
                r = mid
                continue
            mid+=1
            l = mid
            
        
        return -1
        