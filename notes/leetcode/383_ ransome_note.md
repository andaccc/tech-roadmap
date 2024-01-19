# 383. Ransom Note

## Hashmap
O(n+m)

```python
class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        if len(ransomNote) > len(magazine):
            return False
        
        char_map = {}

        for ch in magazine:
            if ch in char_map:
                char_map[ch] += 1
            else:
                char_map[ch] = 1
        
        for ch in ransomNote:
            if ch not in char_map:
                return False
            elif char_map[ch] <= 0:
                return False
            else:
                char_map[ch] -= 1
        
        return True
```
