# Exercise 03: Simple Interest

## Task
Compute simple interest and total amount.

## Input
Three numbers: principal `P`, rate `R` (percent), and time `T` (years).

## Output
Two values:
1. Simple interest
2. Total amount (`P + interest`)

## Example
Input:
```
1000 5 2
```
Output:
```
100 1100
```

## Notes
Use the formula $I = P * R * T / 100$ and `double` for calculations.

## Concept Focus
- Multiple inputs and outputs
- Floating-point arithmetic

## Constraints (Suggested)
- $0 <= P, R, T <= 10^6$

## Approach
Compute interest and total, then print both values.

## Edge Cases
- Zero principal or rate
- Large values requiring `double`
