# 242. Valid Anagram

## hash map

O(n)

```python
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        s_map = {}
        

        for ch in s:
            if ch in s_map:
                s_map[ch] += 1
            else:
                s_map[ch] = 1

        t_map = {}
        for ch in t:
            # check t chars is in s
            if ch not in s_map:
                return False

            if ch in t_map:
                t_map[ch] += 1
            else:
                t_map[ch] = 1

        # check s chars is in t and same count
        for ch in s_map:
            if s_map[ch] != t_map[ch]:
                return False

        return True
```
