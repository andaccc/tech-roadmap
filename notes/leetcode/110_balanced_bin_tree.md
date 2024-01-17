# 110. Balanced Binary Tree

## dfs
bottom up recusion 

O(n)
```python
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        def dfs(root):
            if not root:
                # balance and height 0
                return [True, 0]
            
            l, r = dfs(root.left), dfs(root.right)
            balanced = (abs(l[1] - r[1]) <= 1 and l[0] and r[0])

            return [balanced, 1 + max(l[1], r[1])]
            
        return dfs(root)[0]
```
