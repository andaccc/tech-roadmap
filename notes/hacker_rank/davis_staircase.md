# Davis Staircase

current number of ways = previous 1~3 steps numbers of ways add up 

simple bottom up dp 


```python
def stepPerms(n):
    dp = [0] * n
    # base case step 1~3
    if n == 1 or n == 2:
        return n
    
    if n == 3:
        return 4
    
    dp[0] = 1
    dp[1] = 2
    dp[2] = 4
    
    for i in range(3, n):
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3]
        
    return dp[n-1]
```
