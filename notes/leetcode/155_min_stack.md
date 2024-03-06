# 155. Min Stack
need O(1) to find min value

## Min value stack
2 stacks
- element stack
- min value stack to store minimum value at current index

[1, 2, 3, -1]

[1, 1, 1, -1]
  

```python
class MinStack:

    def __init__(self):
        self.a = []
        self.min = []

    def push(self, val: int) -> None:
        self.a.append(val)
        
        if len(self.min) == 0:
            self.min.append(val)
        else:
            new_min = min(self.min[-1], val)
            self.min.append(new_min)

    def pop(self) -> None:
        self.a.pop()
        self.min.pop()

    def top(self) -> int:
        return self.a[-1]

    def getMin(self) -> int:
        return self.min[-1]


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()
```
