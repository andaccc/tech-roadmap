# 121. Best Time to Buy and Sell Stock
Find Ordered Min Max

## Brute Force 
- Check each element and compair other elements one by one 
- O(n^2)

## Sliding Window
- Left, Right pointer
- O(n)

```python
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        l, r = 0, 1
        ret = 0

        while r < len(prices):
            if prices[l] > prices[r]:
                l += 1
            else:
                diff = prices[r] - prices[l]
                ret = max(ret, diff)
                r += 1
        return ret
```
