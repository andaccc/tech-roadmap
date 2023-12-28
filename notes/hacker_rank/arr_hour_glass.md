# 2D Array Hour Glass Sum

```python
#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'hourglassSum' function below.
#
# The function is expected to return an INTEGER.
# The function accepts 2D_INTEGER_ARRAY arr as parameter.
#

def hourglassSum(arr):
    # Write your code here
    ret = -9 * 7
    
    for i in range(2, 6):
        for j in range(2, 6):
            hg_sum = arr[j-2][i-2] + arr[j-2][i-1] + arr[j-2][i]
            hg_sum += arr[j-1][i-1]
            hg_sum += arr[j][i-2] + arr[j][i-1] + arr[j][i]
            ret = max(hg_sum, ret)
            
    return ret

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr = []

    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))

    result = hourglassSum(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
```
