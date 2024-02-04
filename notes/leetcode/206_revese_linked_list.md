# 206. Reverse Linked List

## Iter
3 pointers prev, cur, tmp
O(n)

`1->2->3`

`None<-1 2->3` `cur.next=prev`

`None<-1<-2 3`

`None<-1<-2<-3`

```python
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        prev, cur = None, head

        while cur:
            t = cur.next
            cur.next = prev
            prev = cur
            cur = t
        
        return prev
```

## Recur
3 pointers prev, cur, tmp

```python
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head):
        def reverse(cur, prev):
            if cur is None:
                return prev
            else:
                t = cur.next
                cur.next = prev
                return reverse(t, cur)  # update cur, prev

        return reverse(head, None)
```
