## Algorithms
Recursive 
Backtracking
- Choose
- Constraint
- Goal

## Searching
### Linear Search
Scan through each elements
- time: O(n)
- space: O(1)

### Binary Search
- Divide and conquer 
- Left, Mid, Right pointer
- must be sorted
- time: O(log n)
- space: O(1)
```python
def binarySearch(array, x, low, high):

    # Repeat until the pointers low and high meet each other
    while low <= high:
        mid = low + (high - low)//2

        if array[mid] == x:
            return mid

        elif array[mid] < x:
            low = mid + 1

        else:
            high = mid - 1

    return -1
```


### Depth First Search
- deep into subtree
- O(V+E)

### Breadth First Search
- explore all nodes for current depth
- O(V+E)

## Sorting
### Bubble Sort
- swapping adjacent elements
- time: O(n^2)
- space: O(1)

```
bubbleSort(array)
  for i <- 1 to indexOfLastUnsortedElement-1
    if leftElement > rightElement
      swap leftElement and rightElement
end bubbleSort
```

```python
def bubbleSort(array):
    
  # loop to access each array element
  for i in range(len(array)):

    # loop to compare array elements
    for j in range(0, len(array) - i - 1):

      # compare two adjacent elements
      # change > to < to sort in descending order
      if array[j] > array[j + 1]:

        # swapping elements if elements
        # are not in the intended order
        temp = array[j]
        array[j] = array[j+1]
        array[j+1] = temp
```


### Quick Sort
- pivot, left right sides
- recursive partition
- time: 
 - worst: O(n^2)
 - average: O(nlogn) 
- space: O(n)

### Merge Sort
- recursive divide
- recursive merge left and right side
- time: O(nlogn) 
- space: O(n)

### Insertion Sort
### Selection Sort
### Tree Sort
### Heap SOrt
### Radix Sort
