class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        indices = []
        for index in range(len(nums)):
            try: 
                indices.append(nums.index(target-nums[index],index+1))
                indices.insert(0,index)
                return indices
            except:
                pass
          

