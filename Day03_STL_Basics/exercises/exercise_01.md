# Exercise 01: Count Distinct Numbers

## Task
Read `n` integers and output the number of distinct values.

## Input
- Integer `n`
- `n` integers

## Output
A single integer: the count of distinct numbers.

## Example
Input:
```
6
1 2 2 3 3 3
```
Output:
```
3
```

## Notes
Use a `set` to keep only unique values.

## Concept Focus
- Uniqueness using sets
- Counting distinct values

## Constraints (Suggested)
- $1 <= n <= 2 * 10^5$

## Approach
Insert every number into a `set`, then print `set.size()`.

## Edge Cases
- All values the same
