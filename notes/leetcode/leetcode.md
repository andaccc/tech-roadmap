# Data Structure
- Linked Lists
- Tree
- Graphs
- Stack / Queues
- Heaps (max / min, parent >/< childer)
- String
- Array
- Hash Table/ Map
  - O(1) ( O(log N) )

# Algorithm 

## Brute Force
- direct flow

## Search
- Breadth-First Search
- Depth-First Search
- **Binary Search**
  - low/high/mid pointer
  - O(log(n))
  ```python 
  # initial status
  left = 0
  right = len(arr) - 1
        
  found = -1
  while left <= right:
      mid = (left + right) // 2
      if arr[mid] < target:
          # pick right side
          left = mid + 1
      elif arr[mid] > target:
          # pick left side
          right = mid - 1
      elif arr[mid] == target:
          found = mid
  ```

## Sort
- Quick Sort (pivot)
- Merge Sort (recursive divide)

# Concepts 
- Bit Manipulation
- Memory (Stack vs Heap)
- Pointer / pivot
- Iterative
- Recursion
  - each call = new layer to stack, depth n: O(n) memory
  - Backtracking
- Dynamic Programming
  - recursive 
  - overlapping subproblem
  - memoriozation, caching previous call results
	- memoization table (dp table)
- Sliding Window

# Unique elements
Hash map
  - C++ 
    - unordered_map
    - map
  - Python
    - dict
    

# Flow
- understand problem
- Brute Force
- Optimize algorithm 
    1. Improvement
        - Bottlenecks
        - Unnecessary work
    	- Duplicated Work
    2. layout Real example
    3. Simplify and Generalize (Pesudo Code)
    	- what exact step (create array...)
    	- improve it by hash table
    4. Base Case and Build
    	- complex case 
    5. Data Structure Brainstorm
    	- which to use
- Implement Code
  - simple
  - Readable
  - Maintainable
- Test Case
  - special case

# Testing
- Edge cases
  - negative numbers
  - empty value

- Normal cases

- logic dependent

- Load testing
  - max constraints

# Time Space Complexity

### Time
- O(N)
- O(N^2)
- O(2^N)
- O(log N) division
- O(N log N)
- O(1)

- Best Case
- Worst Case
- Expected Case

### Space
- array: O(n)
- 2D arr: O(N^2)
- recursion

O(N^2 + N) = O(N^2)
O(N + log N) = O(N)
O(5*2^N + 1000N^100) = O(2^N)
