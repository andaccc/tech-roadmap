# 53. Maximum Subarray

## DP
O(n)

`current max = max(num, dp[i-1] + num)`

```python
class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        dp = [0] * len(nums)

        ret = None
    
        for i, num in enumerate(nums):
            if i == 0:
                dp[0] = num
                ret = num
            else:
                dp[i] = max(num, dp[i-1] + num)
                ret = max(ret, dp[i])

        return ret
```
