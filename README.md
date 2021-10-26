# C - Sorting algorithms & Big O
## Bubble Sort
	-is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order
	- Bubble sort takes Ο(n 2) time

**Example**
```
First Pass
( 5 1 4 2 8 ) → ( 1 5 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1.

( 1 5 4 2 8 ) → ( 1 4 5 2 8 ), Swap since 5 > 4
( 1 4 5 2 8 ) → ( 1 4 2 5 8 ), Swap since 5 > 2
( 1 4 2 5 8 ) → ( 1 4 2 5 8 ), Now, since these elements are already in order (8 > 5), algorithm does not swap them.

Second Pass
( 1 4 2 5 8 ) → ( 1 4 2 5 8 )
( 1 4 2 5 8 ) → ( 1 2 4 5 8 ), Swap since 4 > 2
( 1 2 4 5 8 ) → ( 1 2 4 5 8 )
( 1 2 4 5 8 ) → ( 1 2 4 5 8 )
Now, the array is already sorted, but the algorithm does not know if it is completed. The algorithm needs one additional whole pass without any swap to know it is sorted.

Third Pass
( 1 2 4 5 8 ) → ( 1 2 4 5 8 )
( 1 2 4 5 8 ) → ( 1 2 4 5 8 )
( 1 2 4 5 8 ) → ( 1 2 4 5 8 )
( 1 2 4 5 8 ) → ( 1 2 4 5 8 )
```
## Insertion sort
	- Insertion sort is a simple sorting algorithm that builds the final sorted array (or list) one item at a time. 
```
	Pseudocode 
	i ← 1
	while i < length(A)
    		j ← i
    		while j > 0 and A[j-1] > A[j]
        		swap A[j] and A[j-1]
       	 		j ← j - 1
    		end while
    		i ← i + 1
	end while
```
## Selection sort
- In computer science, selection sort is an in-place comparison sorting algorithm. It has an O(n2) time complexity, which makes it inefficient on large lists, and generally performs worse than the similar insertion sort.
**Eg.**
```
arr[] = 64 25 12 22 11

// Find the minimum element in arr[0...4]
// and place it at beginning
11 25 12 22 64

// Find the minimum element in arr[1...4]
// and place it at beginning of arr[1...4]
11 12 25 22 64

// Find the minimum element in arr[2...4]
// and place it at beginning of arr[2...4]
11 12 22 25 64

// Find the minimum element in arr[3...4]
// and place it at beginning of arr[3...4]
11 12 22 25 64 

```
## Quicksort
- Quicksort is an in-place sorting algorithm. Developed by British computer scientist Tony Hoare in 1959[1] and published in 1961,[2] it is still a commonly used algorithm for sorting.
**Algorithm**
```
// Sorts a (portion of an) array, divides it into partitions, then sorts those
algorithm quicksort(A, lo, hi) is 
  // If indices are in correct order
  if lo >= 0 && hi >= 0 && lo < hi then 
    // Partition array and get pivot index
    p := partition(A, lo, hi) 
      
    // Sort the two partitions
    quicksort(A, lo, p - 1) // Left side of pivot
    quicksort(A, p + 1, hi) // Right side of pivot

// Divides array into two partitions
algorithm partition(A, lo, hi) is 
  pivot := A[hi] // The pivot must be the last element

  // Pivot index
  i := lo - 1

  for j := lo to hi do 
    // If the current element is less than or equal to the pivot
    if A[j] <= pivot then 
      // Move the pivot index forward
      i := i + 1

      // Swap the current element with the element at the pivot
      swap A[i] with A[j] 
  return i // the pivot index
```
