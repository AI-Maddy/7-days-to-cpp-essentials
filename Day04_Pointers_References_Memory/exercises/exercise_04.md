# Exercise 04: Reverse with Pointers

## Task
Reverse an array of `n` integers in place using pointers.

## Input
- Integer `n`
- `n` integers

## Output
The reversed array, space-separated.

## Example
Input:
```
4
10 20 30 40
```
Output:
```
40 30 20 10
```

## Notes
Use two pointers: one at the start, one at the end, and swap while they cross.

## Concept Focus
- In-place reversal
- Pointer movement

## Constraints (Suggested)
- $1 <= n <= 10^5$

## Approach
Use two pointers and swap until they meet.

## Edge Cases
- `n = 1`
