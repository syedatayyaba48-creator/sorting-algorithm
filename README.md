# Sorting Algorithms Visualizer

A C++ program that implements and compares five sorting algorithms with step-by-step visualization and execution-time measurements.

## Features

- Five sorting algorithms: Bubble Sort, Selection Sort, Insertion Sort, Merge Sort, and Quick Sort  
- Step-by-step visualization that shows how each algorithm processes the array  
- Performance comparison: tracks execution time (nanoseconds) for each algorithm  
- Interactive menu: user-friendly interface to test multiple algorithms on the same input  
- Input validation with re-prompts and error messages

## Algorithms Implemented

- **Bubble Sort** — Repeatedly swaps adjacent elements if they're in the wrong order  
- **Selection Sort** — Finds the minimum element and places it at the beginning  
- **Insertion Sort** — Builds a sorted array one element at a time  
- **Merge Sort** — Divide-and-conquer algorithm with O(n log n) complexity  
- **Quick Sort** — Divide-and-conquer algorithm using pivot-based partitioning

## Requirements

- C++ compiler with C++11 support or higher  
- Standard Template Library (STL)

## Usage

1. Compile the program with a C++11 (or later) compatible compiler, e.g.:
   ```bash
   g++ -std=c++11 -o sorter sorter.cpp
   ```
2. Run the executable:
   ```bash
   ./sorter
   ```
3. Follow the prompts:
   - Enter the size of the array (positive integer)
   - Input the array elements (integers between 0 and 1000)
   - Choose a sorting algorithm from the menu
   - Repeat with a new array or exit to view the performance summary

### Menu Options
- 1 — Bubble Sort  
- 2 — Selection Sort  
- 3 — Insertion Sort  
- 4 — Merge Sort  
- 5 — Quick Sort  
- 6 — Exit and view performance summary

## Example Interaction

```
Enter the size of the array: 5
Enter the elements of the array: 64 34 25 12 22

*******************************
      SORTING ALGORITHMS      
*******************************
 1. BUBBLE SORT              
 2. SELECTION SORT           
 3. INSERTION SORT           
 4. MERGE SORT               
 5. QUICK SORT               
 6. EXIT                     

***Enter your choice: 1
You selected BUBBLE SORT.
step 1:
22 34 25 12 64 
step 2:
22 25 12 34 64 
...
Total Time Taken: 6777000 nanoseconds
```

## Performance Comparison (example)

| Algorithm      | Duration (nanoseconds) |
|----------------|-------------------------|
| Bubble Sort    | 6777000                |
| Selection Sort | 2998000                |
| Insertion Sort | 3003000                |
| Merge Sort     | 6008000                |
| Quick Sort     | 2506000                |

> Note: These numbers are example outputs. Actual timings depend on input, machine, and implementation details.

## Input Constraints

- Array size: positive integer (recommended maximum: 100 elements)  
- Array elements: integers between 0 and 1000  
- Invalid inputs trigger re-prompts with error messages

## Learning Outcomes

This program is ideal for:
- Understanding the behavior and inner steps of common sorting algorithms  
- Comparing algorithm efficiency in practice (timing)  
- Learning time complexity concepts and implementation patterns in C++

