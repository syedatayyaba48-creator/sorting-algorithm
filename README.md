Sorting Algorithms Visualizer

A C++ program that implements and compares five sorting algorithms with step-by-step visualization.
Features

Five Sorting Algorithms: Bubble Sort, Selection Sort, Insertion Sort, Merge Sort, and Quick Sort
Step-by-Step Visualization: shows how each algorithm processes the array
Performance Comparison: Tracks the execution time in nanoseconds for each algorithm
Interactive Menu: User-friendly interface to test multiple algorithms on the same input
Input Validation: error handling is done for array size and element inputs

Algorithms Implemented

Bubble Sort - Repeatedly swaps adjacent elements if they're in wrong order
Selection Sort - Finds minimum element and places it at the beginning
Insertion Sort - Builds sorted array one element at a time
Merge Sort - Divide-and-conquer algorithm with O(n log n) complexity
Quick Sort - Divide-and-conquer with pivot-based partitioning

Requirements

C++ compiler with C++11 support or higher
Standard Template Library (STL)

Usage

Enter the size of the array (positive integer)
Input array elements (numbers between 0 and 1000)
Select sorting algorithms from the menu:

Option 1-5: Run specific sorting algorithm
Option 6: Exit and view performance summary


Compare execution times of different algorithms
Choose whether to continue with a new array

Example Output
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
Performance Comparison Table
Upon exit, the program displays a summary table:**
-----------------------------------------
Algorithm           Duration (nanoseconds)
----------------------------------------*
Bubble Sort         6777000
Selection Sort      2998000
Insertion Sort      3003000
Merge Sort          6008000
Quick Sort          2506000
----------------------------------------*
Input Constraints*

Array size: Positive integer (max 100 elements)
Array elements: Integers between 0 and 1000
Invalid inputs trigger re-prompts with error messages

Learning Outcomes
This program is ideal for:

Understanding sorting algorithm behavior
Comparing algorithm efficiency
Learning time complexity concepts
Studying algorithm implementation in C++
