# 207. Course Schedule

## Graph, adjacency List
dfs 

O(n+p)

```python
class Solution:
    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        # graph, adjacency list
        preMap = { i : [] for i in range(numCourses) }
        for node, pre in prerequisites:
            preMap[node].append(pre)

        visitSet = set()
        def dfs(node):  # recursive
            # base cases
            if c in visitSet:  # graph cycle loop
                return False
            if preMap[node] == []: # edge 
                return True
            
            visitSet.add(node)
            # check prerequisites
            for pre in preMap[node]:
                if not dfs(pre): 
                    return False

            # the node is checked
            # no need to check again in later checking
            visitSet.remove(node)
            preMap[node] = []

            return True

        for node in range(numCourses):
            if not dfs(node): 
                return False
        
        return True
```
