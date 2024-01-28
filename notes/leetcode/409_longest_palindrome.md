# 409. Longest Palindrome

## Hash Map
even character counts + 1 if odd exists

O(n)


```python
class Solution:
    def longestPalindrome(self, s: str) -> int:
        # base case
        if len(s) == 1:
            return 1

        add_odd = False

        # hashmap
        m = {}
        ret = 0
        for ch in s:
            if ch in m:
                m[ch] += 1
            else:
                m[ch] = 1
        
        for ch in m:
            if m[ch] % 2 == 0: 
                ret += m[ch]
            else:
                ret += m[ch] - 1
                if not add_odd:
                    ret += 1
                    add_odd = True
        
        return ret
```
