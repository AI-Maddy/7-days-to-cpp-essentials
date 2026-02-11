# Exercise 03: Maximum in a Vector

## Task
Read `n` integers into a vector and print the maximum value.

## Input
- An integer `n`
- `n` integers

## Output
The maximum value.

## Example
Input:
```
4
-2 9 3 1
```
Output:
```
9
```

## Notes
Assume `n >= 1`. Start with the first value as the current maximum.

## Concept Focus
- Vector traversal
- Tracking a running maximum

## Constraints (Suggested)
- $1 <= n <= 10^5$

## Approach
Initialize `max_value` with the first element, then scan the rest.

## Edge Cases
- All negative values
