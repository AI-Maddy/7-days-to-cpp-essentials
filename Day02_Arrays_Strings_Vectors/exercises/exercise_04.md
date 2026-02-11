# Exercise 04: Rotate an Array by k

## Task
Rotate an array of `n` integers to the right by `k` positions.

## Input
- Integer `n`
- Integer `k`
- `n` integers

## Output
The rotated array, space-separated.

## Example
Input:
```
5
2
1 2 3 4 5
```
Output:
```
4 5 1 2 3
```

## Notes
You can reduce `k` using `k = k % n`. Use a new vector or perform in-place rotation.

## Concept Focus
- Index mapping
- Using modulo arithmetic

## Constraints (Suggested)
- $1 <= n <= 10^5$
- $0 <= k <= 10^9$

## Approach
Compute new index `(i + k) % n` for each element and place it there.

## Edge Cases
- `k = 0`
- `k` larger than `n`
