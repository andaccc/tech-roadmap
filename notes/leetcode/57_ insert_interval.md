# 57. Insert Interval

## Iter
O(n)
keep updating Nnew inv

```python
class Solution:
    def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
        ret = []

        for i, inv in enumerate(intervals):
            if newInterval[1] < inv[0]:  # inv  > new inv
                ret.append(newInterval)  # new inv add to beginning  
                return ret + intervals[i:]
            elif newInterval[0] > inv[1]: # new inv larger than current inv
                ret.append(inv)  # add the interval as it is
            else:
                newInterval = [min(newInterval[0], inv[0]), max(newInterval[1], inv[1])]
        
        ret.append(newInterval)

        return ret
```
