# 733. Flood Fill

2D Arr
Recusion 

## Depth-First Search
Recusion 
time: `O(r*c)`
space: `O(r*c)`

```python
class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:
        target = image[sr][sc]
        r_len, c_len = len(image), len(image[0])

        # edge case same color
        if target == color:
            return image

        def dfs(r, c):
            if image[r][c] == target:
                image[r][c] = color
                # move 4 dir
                if r >= 1: # up
                    dfs(r-1, c)
                if r < r_len - 1: # down
                    dfs(r + 1, c)
                if c >= 1: # left
                    dfs(r, c-1)
                if c < c_len - 1: # right
                    dfs(r, c+1)
        
        dfs(sr, sc)
        return image
###
