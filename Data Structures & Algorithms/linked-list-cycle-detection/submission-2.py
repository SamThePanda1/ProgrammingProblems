# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        #we can use hash set to store values, but that uses o(n) space to store
        #the values, or we can use fast and slow pointer so that fast pointer
        #eventually laps the slow one for o(1) space. both options are o(n) time
        slow = fast = head
        if head is None:
            return False
        while fast:
            fast = fast.next
            if fast is None:
                return False
            fast = fast.next
            if fast is None: 
                return False
            slow = slow.next
            if fast.val == slow.val:
                return True
        