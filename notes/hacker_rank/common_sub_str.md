# Common Sub String
```python
def twoStrings(s1, s2):
    # Write your code here
    for ch in s2:
        if ch in s1:
            return 'YES'
            
    return 'NO'
```
