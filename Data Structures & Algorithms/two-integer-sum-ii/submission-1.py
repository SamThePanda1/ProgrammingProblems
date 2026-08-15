class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        l = 0
        r = len(numbers)-1
        sum = -1
        while l<r:
            sum = numbers[r] + numbers[l]
            if sum < target:
                l+=1
            elif sum > target:
                r -=1
            else:
                return [l+1,r+1]

        