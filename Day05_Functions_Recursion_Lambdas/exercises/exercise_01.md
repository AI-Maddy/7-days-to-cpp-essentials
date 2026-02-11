# Exercise 01: GCD with Recursion

## Task
Write a recursive function to compute the greatest common divisor (GCD) of two integers.

## Input
Two integers `a` and `b`.

## Output
The GCD of `a` and `b`.

## Example
Input:
```
24 18
```
Output:
```
6
```

## Notes
Use the Euclidean algorithm: `gcd(a, b) = gcd(b, a % b)` with base case `b == 0`.

## Concept Focus
- Recursion with a base case
- Modulo arithmetic

## Constraints (Suggested)
- $1 <= a, b <= 10^9$

## Approach
Implement recursive `gcd` and print the result.

## Edge Cases
- One value is zero
