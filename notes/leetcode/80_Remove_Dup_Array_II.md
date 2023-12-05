# 80. Remove Duplicates from Sorted Array II

Pointer for element replacement

```python

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        arr_len = len(nums)
        count = 1
        last_ele = nums[0]
        replace_ptr = 1

        # base case
        if arr_len <= 2:
            return arr_len

        for i in range(1, arr_len):
            if last_ele == nums[i]:
                count += 1
            else:
                count = 1

            last_ele = nums[i]
            
            # replace
            nums[replace_ptr] = nums[i]

            if count <= 2:
                replace_ptr += 1

        # return int !!!
        return replace_ptr
