# Software Fundamentals

## Memory Allocation
- Stack (High Adress)
  - local variables 
  - Fixed size
- Heap
  - Dynamic/ Explicit allocation
- Initialized data
  - global/static
  - `static int i = 10`
- Uninialized data / BSS
  - not have explicit initialization 
  - `int j`
- Text (Low Address)
  - store excuting code


## Data Structures
- Array
- Linked List
- Queue
- Stack
- Graph
- Map

## Complexity Analysis
- BigO notation
- Time
- Space

## Algorithm 
### Search
  - Binary Search
  - Depth First Search
  - Breadth First Search
### Sort
  - Merge Sort
  - Quick Sort

## Threading
### Process
  - Executable
  - separate system resources 
### Thread
  - within same process
  - shared memory resources in same heap
### Synchronization / Lock
  - prevent multiple threads access same resource at the same time
### Deadlocks
- both thread waiting lock releases
  - Mutual Exclusion: Only one process can access a resource at given time
  - Hold and Wait: not relinquishing current resources when requesting additional resoures
  - No Preemption: cannot forcibly remove another process' resource
  - Circular Wait: each process is waiting another resource  
### Concurrency
  - Data sharing
  - Synchronization

## Software Design

### Object Oriented 
### Paradigms
  - Imperative
  - Declarative
### Class Design
  - SOLID
    - Single responsibility
    - Open Close
      - Open for Extension, Closed for Modification
    - Liskov Substitution
      - objects of a superclass shall be replaceable with objects of its subclasses without breaking the application
      - Subclass need to match behavior of superclass 
    - Interface Segregation
      - larger interfaces should be split into smaller ones
    - Dependency Inversion
      - Interaction between high-level and low-level modules should depend on abstractions
      - Decouple
### Design Patterns
  - Creational
  - Behavioral
  - Structural
### Software Architecture
  - Layered
  - Microservices
  - Cache


References:
https://www.youtube.com/playlist?list=PL4JxLacgYgqTgW1-ZPLPH4pKGxX_9ma-t
