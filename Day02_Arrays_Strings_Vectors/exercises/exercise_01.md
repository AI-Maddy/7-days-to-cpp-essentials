# Exercise 01: Reverse an Array

## Task
Read an integer `n` and an array of `n` integers. Print the array in reverse order.

## Input
- An integer `n`
- `n` integers

## Output
The `n` integers in reverse order, space-separated.

## Example
Input:
```
5
1 2 3 4 5
```
Output:
```
5 4 3 2 1
```

## Notes
Use a loop from the end to the beginning. Avoid extra spaces at the end.

## Concept Focus
- Array traversal
- Output formatting

## Constraints (Suggested)
- $1 <= n <= 10^5$
- Values fit in `int`

## Approach
Store the numbers, then print them from `n-1` down to `0`.

## Edge Cases
- `n = 1`
