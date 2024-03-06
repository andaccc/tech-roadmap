# 98. Validate Binary Search Tree

- left subtree node < key
- right subtree node > key

```
    5
   / \
  4   6
     / \
    3   7
```

3 < 5 and on right subtree -> Invalid BST

## upper/ lower bound
O(n)

recusion
- update upper bound for left subtree
- update lower bound for right subtree

```python
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:

        def find(root, lower, upper):
            if not root:
                return True 

            if not (root.val > lower and root.val < upper):
                return False
            
            # update upper bound for left subtree
            # lower bound for right subtree
            return find(root.left, lower, root.val) and find(root.right, root.val, upper)
        
        return find(root, float("-inf"), float("inf"))
```
