# 322. Coin Change
Array

## DP
dp bottom up 
Check previous least amount of coin for all coins
`Time: O( amount * len(coins) )`
`Space: O(amount)`

```python
class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        dp = [ -1 ] * (amount + 1)  # include 0
        
        # base case
        dp[0] = 0

        # fill up dp table
        for i in range (1, amount + 1):
            # check each coin
            for c in coins:
                if i == c:
                    dp[i] = 1
                    break 
                elif i - c < 1:
                    continue  # invalid change, ignore
                else:
                    # check previous coin change amount
                    prev = dp[i-c]
                    if prev == -1:
                        continue
                    elif dp[i] == -1:  # if amount not found yet
                        dp[i] = prev + 1  # just take the prev amount and add 1
                    else:  # compare all count prev amount
                        dp[i] = min(dp[i], prev + 1) 

        return dp[amount]
```
