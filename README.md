# AOA Lab – Analysis and Design of Algorithms

This repository contains **AOA (Analysis and Design of Algorithms) Lab Programs** implemented as part of the B.Tech Computer Science Engineering curriculum.

The programs cover important algorithmic techniques such as **Searching, Sorting, Greedy Algorithms, Dynamic Programming, and Graph Traversal**.

---

## 📚 Topics Covered

### 1. Searching

* Linear Search
* Binary Search

### 2. Sorting

* Bubble Sort
* Selection Sort
* Insertion Sort
* Merge Sort
* Quick Sort

### 3. Greedy Algorithms

* Dijkstra's Shortest Path Algorithm
* Fractional Knapsack
* Prim's Algorithm
* Kruskal's Algorithm

### 4. Dynamic Programming

* 0/1 Knapsack
* Fibonacci using Dynamic Programming
* Longest Common Subsequence (LCS)
* Matrix Chain Multiplication

### 5. Graph Algorithms

* Breadth First Search (BFS)
* Depth First Search (DFS)
* Shortest Path
* Minimum Spanning Tree

---

# 🔹 Important Algorithms

## Dijkstra's Algorithm

Dijkstra's Algorithm is used to find the **shortest path from a single source vertex to all other vertices** in a weighted graph.

### Key Points

* Uses Greedy approach
* Works with non-negative edge weights
* Finds Single Source Shortest Path
* Negative edge weights are not supported

### Time Complexity

```text
O(V²)
```

or with a priority queue:

```text
O((V + E) log V)
```

---

# 🔹 Knapsack Problem

The Knapsack Problem is an optimization problem where we select items to maximize profit while keeping the total weight within the given capacity.

## 0/1 Knapsack

In 0/1 Knapsack:

* An item can either be selected or rejected.
* Fraction of an item cannot be selected.
* Dynamic Programming is commonly used.

### Time Complexity

```text
O(n × W)
```

Where:

* `n` = number of items
* `W` = capacity of the knapsack

## Fractional Knapsack

In Fractional Knapsack, we can select a fraction of an item.

The items are selected according to:

```text
Profit / Weight
```

### Approach

```text
Greedy Algorithm
```

---

# 🔹 BFS – Breadth First Search

BFS is a graph traversal algorithm that visits vertices **level by level**.

### Data Structure Used

```text
Queue
```

### Time Complexity

```text
O(V + E)
```

### Applications

* Shortest path in an unweighted graph
* Level-order traversal
* Network traversal

---

# 🔹 DFS – Depth First Search

DFS is a graph traversal algorithm that explores a graph **as deeply as possible before backtracking**.

### Data Structure Used

```text
Stack / Recursion
```

### Time Complexity

```text
O(V + E)
```

### Applications

* Cycle detection
* Connected components
* Maze solving
* Topological sorting
* Graph traversal

---

# 📊 BFS vs DFS

| Feature         | BFS                         | DFS                                  |
| --------------- | --------------------------- | ------------------------------------ |
| Full Form       | Breadth First Search        | Depth First Search                   |
| Traversal       | Level-wise                  | Depth-wise                           |
| Data Structure  | Queue                       | Stack / Recursion                    |
| Time Complexity | O(V + E)                    | O(V + E)                             |
| Shortest Path   | Useful for unweighted graph | Not generally used for shortest path |
| Backtracking    | Less direct                 | Common                               |

---

# ⏱️ Time Complexity

Time complexity describes how the running time of an algorithm grows with the input size.

| Complexity | Name         |
| ---------- | ------------ |
| O(1)       | Constant     |
| O(log n)   | Logarithmic  |
| O(n)       | Linear       |
| O(n log n) | Linearithmic |
| O(n²)      | Quadratic    |

### Common Examples

| Algorithm      | Average/Worst Complexity |
| -------------- | ------------------------ |
| Linear Search  | O(n)                     |
| Binary Search  | O(log n)                 |
| Bubble Sort    | O(n²)                    |
| Selection Sort | O(n²)                    |
| Insertion Sort | O(n²)                    |
| Merge Sort     | O(n log n)               |
| Quick Sort     | O(n log n) average       |
| BFS            | O(V + E)                 |
| DFS            | O(V + E)                 |
| Dijkstra       | O(V²)                    |
| 0/1 Knapsack   | O(nW)                    |

---

# 🧠 Algorithmic Techniques

## Divide and Conquer

The problem is divided into smaller subproblems, solved independently, and their results are combined.

Examples:

* Binary Search
* Merge Sort
* Quick Sort

## Greedy Method

At every step, the algorithm chooses the locally best option.

Examples:

* Dijkstra
* Fractional Knapsack
* Prim
* Kruskal

## Dynamic Programming

Dynamic Programming stores previously calculated results to avoid repeated calculations.

Examples:

* 0/1 Knapsack
* LCS
* Matrix Chain Multiplication

---

# 🎯 AOA Lab Viva Preparation

Important questions for viva:

1. What is an algorithm?
2. What is time complexity?
3. What is space complexity?
4. What is Big-O notation?
5. What is Dijkstra's Algorithm?
6. Why can't Dijkstra handle negative edge weights?
7. What is relaxation in Dijkstra?
8. What is 0/1 Knapsack?
9. What is Fractional Knapsack?
10. Difference between 0/1 and Fractional Knapsack?
11. What is BFS?
12. What data structure is used in BFS?
13. What is DFS?
14. What data structure is used in DFS?
15. Difference between BFS and DFS?
16. What is Greedy Algorithm?
17. What is Dynamic Programming?
18. What is Divide and Conquer?
19. What is the time complexity of BFS and DFS?
20. What is the difference between Prim's and Kruskal's Algorithm?

---

# 🛠️ Technologies Used

* C / C++
* Data Structures
* Algorithms
* Graph Theory
* Dynamic Programming
* Greedy Algorithms

---

# 📁 Suggested Project Structure

```text
AOA-Lab/
│
├── Searching/
│   ├── LinearSearch.cpp
│   └── BinarySearch.cpp
│
├── Sorting/
│   ├── BubbleSort.cpp
│   ├── SelectionSort.cpp
│   ├── InsertionSort.cpp
│   ├── MergeSort.cpp
│   └── QuickSort.cpp
│
├── Greedy/
│   ├── Dijkstra.cpp
│   ├── FractionalKnapsack.cpp
│   ├── Prim.cpp
│   └── Kruskal.cpp
│
├── DynamicProgramming/
│   ├── Knapsack01.cpp
│   ├── Fibonacci.cpp
│   └── LCS.cpp
│
├── Graph/
│   ├── BFS.cpp
│   └── DFS.cpp
│
└── README.md
```

---

## 👨‍💻 Author

**Niraj Mandal**

B.Tech – Computer Science Engineering

Arya College of Engineering & IT
