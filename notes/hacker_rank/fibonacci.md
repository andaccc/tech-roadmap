# Fibonacci

```python
def fibonacci(n):
    # dp
    dp = [0] * (n+1)
    # base case
    dp[0] = 0
    dp[1] = 1
    
    if n <= 1:
        return dp[n]
    
    for i in range(2, n+1):
        dp[i] = dp[i-1] + dp[i-2]

    return dp[n]
    
    # basic
    # if n == 0:
    #     return 0
    # if n == 1:
    #     return 1
    # # Write your code here.
    # return fibonacci(n-1) + fibonacci(n-2
```
