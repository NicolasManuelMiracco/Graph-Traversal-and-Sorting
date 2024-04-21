# Graph-Traversal-and-Sorting

One-line description: A C++ program that demonstrates graph traversal methods (BFS and DFS) and implements bubble sort to organize array elements.

Summary: This C++ code integrates basic algorithms to demonstrate graph traversal and sorting. It utilizes an adjacency list for representing graph connections and explores them using both Breadth-First Search (BFS) and Depth-First Search (DFS).

**Key Components:**
- **Graph Representation:** The graph is represented as an adjacency list, an efficient way to store sparse graphs.
- **BFS Implementation:** Utilizes a queue to explore nodes level by level, ensuring all nodes at the current depth are explored before moving to the next level. This method prints nodes in the order they are visited.
- **DFS Implementation:** Employs recursion and backtracking to explore nodes as far as possible along each branch before backtracking, storing the order of visited nodes in a vector.
- **Bubble Sort Algorithm:** A simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The process is repeated until no swaps are needed, which means the list is sorted.
- **Vector and Array Utilization:** Uses vectors for the adjacency list and DFS results, and an array for demonstrating the bubble sort.

**Example Use Case:**
- The graph traversal functions are initialized with a predefined graph structure and demonstrate traversing this graph from a starting node using both BFS and DFS.
- The bubble sort function is applied to a static array to showcase sorting functionality.

**Educational Value:**
- This program serves as a practical demonstration of fundamental algorithms in computer science, useful for educational purposes to illustrate how different algorithms operate in a real program.
- It illustrates the application of standard data structures like vectors, queues, and arrays in algorithm implementation.

**Limitations & Improvements:**
- The graph is statically defined, and the program lacks user interaction to modify the graph or input different arrays for sorting dynamically.
- Error handling and input validation are minimal, offering potential areas for enhancement to make the program more robust and user-friendly.

This simple yet informative setup helps beginners understand key algorithms and their implementations in C++.
