class Solution:
    def trap(self, height: List[int]) -> int:
        left = 0
        right = len(height)-1
        leftMax = height[0]
        rightMax = height[-1]
        area = 0
        while left<right:
            if height[left]<height[right]:
                area += leftMax-height[left]
                left+=1
                leftMax = max(leftMax, height[left])
            else:
                area+= rightMax-height[right]
                right-=1
                rightMax = max(rightMax, height[right])
        return area


        