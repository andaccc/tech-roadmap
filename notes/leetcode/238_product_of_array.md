# 238. Product of Array Except Self

need O(n)

## pre/postfix

![image](https://github.com/andaccc/tech-roadmap/assets/8611553/8c25f9d6-dc47-488b-83a2-d53e9af598e9)

```python
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        ret = [1] * len(nums)

        prefix = 1
        for i in range(len(nums)):
            # prefix
            ret[i] = prefix
            prefix = prefix * nums[i]

        postfix = 1
        for i in range(len(nums) - 1, -1, -1):
            ret[i] = postfix * ret[i]
            postfix = postfix * nums[i]

        return ret
```
