# 235. Lowest Common Ancestor of a Binary Search Tree

Binary Search Tree
- left < root
- right > root

Time: `O(logn)`
Space: `O(1)`

```python
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        cur = root

        while cur:
            if p.val < cur.val and q.val < cur.val:
                cur = cur.left
            elif p.val > cur.val and q.val > cur.val:
                cur = cur.right
            else: 
                # 1) cur == p/q
                # 2) cur is between p q  
                return cur 
```
