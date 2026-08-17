# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        #we make fast one half tick ahead so that when we have even length,
        #the slow pointer points to first part and not the first element of the #second part
        slow, fast = head, head.next
        
        #find the middle
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
        #slow.next is the start of the second half, now we reverse it
        curr = slow.next
        #this is done to prevent a cycle
        prev = slow.next = None
        
        while curr is not None:
            nextNode = curr.next
            curr.next = prev
            prev = curr
            curr = nextNode
        #now that we reversed the list, we can start putting the pieces together, 
        #which is taking one from the first part and then one from the second
        #in order to do this, we must store the next pointers so that they won't 
        #get lost when we reorder them
        first, second = head, prev
        
        while second :
            temp1, temp2 = first.next, second.next
            first.next = second
            second.next = temp1
            first = temp1
            second = temp2
            
         
