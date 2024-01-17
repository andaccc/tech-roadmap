# Linked List Cycle 

## Node hash set
- space O(n)

## Fast and slow pointer
Fast = 2 steps
Slow = 1 steps 

Fast and slow pointer will meet if cycle

```python
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        slow, fast = head, head

        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next

            if slow == fast:
                return True

        return False
```
  
