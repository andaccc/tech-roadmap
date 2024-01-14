# 125 Valid Palindrome
alphanumeric

## Two pointers
- Left, Right pointers
- O(n)

```python
class Solution:
    def isPalindrome(self, s: str) -> bool:
        # left right pointer
        l, r = 0, len(s) - 1

        while l < r and l < len(s) and r > 0:
            if s[l].isalnum() and s[r].isalnum():
                if s[l].lower() != s[r].lower():
                    return False
                l += 1
                r -= 1
            elif not s[l].isalnum():
                l += 1
            elif not s[r].isalnum():
                r -= 1

        return True
        
```
