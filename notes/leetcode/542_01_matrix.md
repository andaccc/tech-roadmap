# 542. 01 Matrix

## BFS Traversal
- Find all cells with 0
- Adjacent cell of 0 : dist = 1
- Adjacent cell up, down, left, right : dist = current dist + 1
  

timne/ space: `O(m * n)` 


```python
class Solution:
    def updateMatrix(self, mat: List[List[int]]) -> List[List[int]]:
        m, n = len(mat), len(mat[0])

        queue = deque()

        for i in range(m):
            for j in range(n):
                if mat[i][j] == 0:
                    queue.append((i, j))
                else:
                    mat[i][j] = None

        # build from cells with 0
        while queue:
            row, col = queue.popleft()

            for dr, dc in [(1, 0), (-1, 0), (0, 1), (0, -1)]: # up, down, left, right:
                r, c = row + dr, col + dc

                if 0 <= r < m and 0 <= c < n and mat[r][c] is None:
                    queue.append((r,c))
                    mat[r][c] = mat[row][col] + 1

        return mat


```
