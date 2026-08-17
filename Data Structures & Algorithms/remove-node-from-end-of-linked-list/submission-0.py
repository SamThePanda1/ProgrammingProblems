# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        #my solution is to count how many nodes there are and then iterate
        #again to remove the node at index (length -n), where the first 
        #element is index 0
        curr = head
        count = 0
        while curr is not None:
            curr = curr.next
            count +=1
        #if n is count, then we basically just remove the first element
        if n == count:
            return head.next
        #start from the second element
        prev = head
        curr = head.next
        pos = 1
        while pos != (count - n):
            pos +=1
            prev = curr
            curr = curr.next
        prev.next = curr.next 
        return head