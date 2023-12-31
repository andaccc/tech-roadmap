# Roads and Libraries

Shortest path in graph

```python
def dfs(nodes, node, visited):
    if visited[node]:
        return 0
    visited[node] = 1
    count = 1
    for neighbor in nodes[node]:
        count += dfs(nodes, neighbor, visited)
    return count

def roadsAndLibraries(n, c_lib, c_road, cities):
    # Write your code here
    if c_road > c_lib:
        return c_lib * n
    
    cost = 0
    
    nodes = {i+1: [] for i in range(n)}
    
    visited = [0] * (n+1)
    
    # build graph
    for src, to in cities:
        nodes[src].append(to)
        nodes[to].append(src)
    
    # search
    for node in nodes:
        count = dfs(nodes, node, visited)
        if count:
            cost += c_lib + (count-1)*c_road

    
```
