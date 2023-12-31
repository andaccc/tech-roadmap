# Special String Again

```python
def substrCount(n, s):
    current = [] # current
    prev = [] # previous
    prev_prev = [] # previous of previous
    
    count = 0 
    for ch in s:
        # update and counts
        if current and current[0] == ch:
            # 'aaa'->'aaaa' means 4 more substrings.
            current.append(ch)
            count += len(current)
        else: # start of a new subsequence
            prev_prev = prev
            prev = current
            current = [ch]
            count += 1
        # check new triple 
        if prev and len(prev) == 1:
            if prev_prev and prev_prev[0] == ch:
                if len(prev_prev) >= len(current):
                    count += 1
    return count
```
