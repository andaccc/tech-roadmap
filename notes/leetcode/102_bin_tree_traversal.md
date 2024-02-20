# 102. Binary Tree Level Order Traversal

## BFS + queue
O(n)

```python
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        ret = []

        q = collections.deque()
        q.append(root)

        while q:
            q_len = len(q)
            a = []
            for i in range(q_len):
                t = q.popleft()
                if t:
                    a.append(t.val)
                    q.append(t.left)
                    q.append(t.right)
            if a:
                ret.append(a)

        return ret
```
