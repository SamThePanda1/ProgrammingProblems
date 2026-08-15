class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        l = 0
        r = len(matrix)-1
        col = len(matrix[0])-1
        mid = 0
        while l<=r:
            mid = (l+r)//2
            if(matrix[mid][0]<=target<=matrix[mid][col]):
                break

            elif matrix[mid][col]>target:
                mid-=1
                r= mid
            else:
                mid +=1
                l= mid
        row = mid
        l = 0
        r = col
        while(l<=r and row<len(matrix)):
            mid = (l+r)//2
            if(matrix[row][mid]==target):
                return True

            elif matrix[row][mid]>target:
                mid-=1
                r= mid
            else:
                mid +=1
                l= mid
        return False


