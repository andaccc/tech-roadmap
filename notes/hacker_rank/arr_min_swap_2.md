# Minimun Swap 2

make use of `arr[i] = i + 1`

```python
def minimumSwaps(arr):
    i = 0
    count = 0
    
    while i < len(arr):
        target_index = arr[i] - 1
        # check if it is in correct index
        if i != target_index:
            # swap with target index
            arr[i], arr[target_index] = arr[target_index], arr[i]
            count += 1
        else:
            i += 1

    return count
```
