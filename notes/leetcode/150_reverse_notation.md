# 150. Evaluate Reverse Polish Notation

## Stack
O(n)

```python
class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        s = []

        if len(tokens) == 1:
            return int(tokens.pop())

        for ch in tokens:
            if ch in ('+', '-', '*', '/'):
                b = int(s.pop())
                a = int(s.pop())
                if ch == '+':
                    t = a + b
                    s.append(t)
                if ch == '-':
                    t = a - b
                    s.append(t)
                if ch == '*':
                    t = a * b
                    s.append(t)
                if ch == '/':
                    t = int(a / b)  # // not works -0.0223 = -1
                    s.append(t)
            else:
                s.append(ch)
        return s.pop()
```
