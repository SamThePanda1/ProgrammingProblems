# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        stack = [(root,1)]
        maxDepth = 0
        if root is None:
            return 0
        while stack:
            node = stack.pop()
            depth = node[1]
            maxDepth = max(maxDepth, depth)
            leftNode = node[0].left
            rightNode = node[0].right
            if leftNode:
                stack.append((leftNode,depth+1))
            if rightNode:
                stack.append((rightNode,depth+1))
        return maxDepth