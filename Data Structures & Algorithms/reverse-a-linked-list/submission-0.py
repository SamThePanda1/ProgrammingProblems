# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head is None:
            return head
        curr = head
        prev = curr
        nextNode = curr.next
        curr.next = None
        curr = nextNode
        while curr:
            temp = curr
            nextNode = curr.next
            curr.next = prev
            curr = nextNode
            prev = temp
        return prev