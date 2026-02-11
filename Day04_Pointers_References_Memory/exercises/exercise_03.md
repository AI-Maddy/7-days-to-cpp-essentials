# Exercise 03: Dynamic Allocation and Max

## Task
Dynamically allocate an array of size `n`, read values, and print the maximum.

## Input
- Integer `n`
- `n` integers

## Output
The maximum value.

## Example
Input:
```
5
9 3 7 2 8
```
Output:
```
9
```

## Notes
Remember to `delete[]` the array to avoid leaks.

## Concept Focus
- Dynamic allocation
- Scanning for maximum

## Constraints (Suggested)
- $1 <= n <= 10^5$

## Approach
Allocate with `new[]`, read values, track max, then `delete[]`.

## Edge Cases
- All negative values
