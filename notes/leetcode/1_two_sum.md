# 1. Two Sum

Input: nums = [2,7,11,15], target = 9

Output: [0,1]

## Brute Force
- nested loop search remaining value
- Time: O(n2)
- Space: O(1)

## Hashmap
- Store items and search for remaining value
- Time: O(n)
- Space: O(n)

```python
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # base case
        if len(nums) == 2:
            return [0,1]

        hmap = {}

        for i in range(len(nums)):
            to_find = target - nums[i]

            if to_find in hmap and hmap[to_find] != i:
                return [i, hmap[to_find]]            

            hmap[nums[i]] = i
```
