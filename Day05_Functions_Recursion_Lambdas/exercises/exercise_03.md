# Exercise 03: Count Digits Recursively

## Task
Read a non-negative integer and count its digits using recursion.

## Input
A non-negative integer `n`.

## Output
The number of digits in `n`.

## Example
Input:
```
8091
```
Output:
```
4
```

## Notes
Handle the edge case `n == 0` as having 1 digit.

## Concept Focus
- Recursive counting
- Base case reasoning

## Constraints (Suggested)
- $0 <= n <= 10^{18}$

## Approach
If `n < 10` return 1, else return `1 + countDigits(n / 10)`.

## Edge Cases
- `n = 0`
