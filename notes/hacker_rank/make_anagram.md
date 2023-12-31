# Making Anagrams

```python
def makeAnagram(a, b):
    # Write your code here
    a_map = {}
    b_map = {}
    
    count = 0

    # store to map
    for ch in a:
        if ch in a_map:
            a_map[ch] += 1
        else:
            a_map[ch] = 1
    
    for ch in b:
        if ch in b_map:
            b_map[ch] += 1
        else:
            b_map[ch] = 1
            
    # check a b maps
    # if only one side exist, add char counts
    # if both exist, check outnumbered 
    for k, v in a_map.items():
        if k in b_map:
            if v > b_map[k]:
                count += v - b_map[k]
        else:
            count += v
     
    for k, v in b_map.items():
        if k in a_map:
            if v > a_map[k]:
                count += v - a_map[k]
        else:
            count += v
            
    return count
```
