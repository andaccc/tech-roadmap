# 20. Valid Parentheses

## Stack
- close at correct order
- Time O(n)
- Space O(n)

```python
class Solution:
    def isValid(self, s: str) -> bool:
        # base case
        if len(s) == 1:
            return False

        stack = []

        check_map = { 
            ')' : '(', 
            '}' : '{',
            ']' : '['
            }

        for ch in s:
            if ch in check_map:
                # check stack
                # must be close in order
                if stack and stack[-1] == check_map[ch]:
                    stack.pop()
                else:
                    return False
            else:
                stack.append(ch)

        return stack == []
        
        
```
