# Exercise 02: Sum Array Using Pointers

## Task
Read `n` integers into an array and compute the sum using pointer arithmetic.

## Input
- Integer `n`
- `n` integers

## Output
A single integer: the sum.

## Example
Input:
```
4
1 2 3 4
```
Output:
```
10
```

## Notes
Use a pointer to walk the array: `*(ptr + i)`.

## Concept Focus
- Pointer arithmetic
- Array traversal

## Constraints (Suggested)
- $1 <= n <= 10^5$

## Approach
Allocate array, then sum via pointer arithmetic and print the result.

## Edge Cases
- `n = 1`
