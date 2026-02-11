# Exercise 02: Power with Recursion

## Task
Compute $a^b$ using recursion.

## Input
Two integers `a` and `b` (where `b >= 0`).

## Output
The value of $a^b$.

## Example
Input:
```
2 5
```
Output:
```
32
```

## Notes
Use the base case `b == 0` which returns 1.

## Concept Focus
- Recursion depth
- Integer exponentiation

## Constraints (Suggested)
- $0 <= b <= 30$ for `int` inputs

## Approach
Multiply recursively and return the result.

## Edge Cases
- `b = 0`
