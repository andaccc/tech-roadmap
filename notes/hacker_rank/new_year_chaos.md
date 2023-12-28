# New Year Chaos

array swap

## 1.
```python
def minimumBribes(q):
    # Write your code here
    count = 0
    for i in range(len(q)-1, -1, -1):
        target = i +1
        
        if q[i] != target:
            # search front 2 indices
            if q[i-1] == target:
                count += 1
            
                # swap
                t = q[i]
                q[i] = q[i-1]
                q[i-1] = t
            elif q[i-2] == target:
                count += 2
                # swap
                t = q[i-1]
                q[i-1] = q[i-2]
                q[i-2] = t
                
                t = q[i]
                q[i] = q[i-1]
                q[i-1] = t
            else:
                print("Too chaotic")
                return
    print(count)
```

## 2.
```python
def minimumBribes(q):
    # Write your code here
    count = 0
    for i, v in enumerate(q):
        diff = v - (i + 1)
        
        if diff > 2:
            print('Too chaotic')
            return
        else:
            for j in range(max(0, q[i] - 2), i):
                if q[j] > q[i]:
                    count += 1
    
    print(count)
```
