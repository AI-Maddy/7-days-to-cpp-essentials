# Exercise 04: Template Search in a Vector

## Task
Write a function template that returns the index of a value in a vector.
If the value is not found, return `-1`.

## Input
- Integer `n`
- `n` values
- A target value

## Output
The index of the target (0-based), or `-1` if not found.

## Example
Input:
```
4
10 20 30 40
30
```
Output:
```
2
```

## Notes
Use a linear search inside the template function.

## Concept Focus
- Template functions with containers
- Linear search

## Constraints (Suggested)
- $0 <= n <= 10^5$

## Approach
Scan the vector and return the first index that matches the target.

## Edge Cases
- Target not found
