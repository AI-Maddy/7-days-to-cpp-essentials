# Exercise 03: First Repeating Element

## Task
Given an array, find the first element that appears more than once when scanning from left to right.

## Input
- Integer `n`
- `n` integers

## Output
The first repeating value, or `-1` if there is no repetition.

## Example
Input:
```
7
4 5 1 2 5 3 1
```
Output:
```
5
```

## Notes
Use an `unordered_set` to track elements seen so far.

## Concept Focus
- First repeating detection
- Hash set membership

## Constraints (Suggested)
- $1 <= n <= 2 * 10^5$

## Approach
Scan left to right and report the first value already in the set.

## Edge Cases
- No repetition
