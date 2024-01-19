# 70. Climbing Stairs

## recursion
O(2^n)

## dp
`count[n] = count[n-1] + count[n-2]`
O(n)
```python
class Solution:
    def climbStairs(self, n: int) -> int:
        # dp 
        dp = [0] * n

        if n <= 2:
            return n
        
        dp[0] = 1
        dp[1] = 2
        for i in range(2,n):
            dp[i] = dp[i-1] + dp[i-2]
        
        return dp[n-1]
```
