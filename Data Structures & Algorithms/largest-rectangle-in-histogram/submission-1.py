class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        area = 0
        stack = []
        for i,h in enumerate(heights):
            ind = i
            while stack and stack[-1][1]>h:
                #take the bigger area
                area = max(((i-stack[-1][0])*stack[-1][1]),area)
                ind = stack[-1][0]
                stack.pop()
                
            stack.append((ind,h))
        while stack:
                #take the bigger area
                area = max(((len(heights)-stack[-1][0])*stack[-1][1]),area)
                stack.pop()
                       
        return area