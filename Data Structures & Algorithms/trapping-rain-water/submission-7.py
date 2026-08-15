class Solution:
    def trap(self, height: List[int]) -> int:
        left =0
        right = 1
        maxArea = 0
        area = 0
        rightMaxes = [0]*len(height)
        rightMax = -1
        for i in range(len(height)-1,-1,-1):
            if height[i] > rightMax:
                rightMax = height[i]
            rightMaxes[i]= rightMax

        while right < len(height):
            if (height[right] < height[left]) and rightMaxes[right]>=height[right] :
                area += min(height[left], rightMaxes[right])-height[right]
            else:
                left = right
                
            right += 1
        return area