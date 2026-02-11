# Exercise 04: Print Evens with a Lambda

## Task
Read `n` integers into a vector. Use a lambda to print only the even numbers.

## Input
- Integer `n`
- `n` integers

## Output
All even numbers in the same order, space-separated. Print an empty line if none.

## Example
Input:
```
6
1 2 3 4 5 6
```
Output:
```
2 4 6
```

## Notes
Use `std::for_each` or a simple loop with a lambda condition.

## Concept Focus
- Lambda expressions
- Filtering values

## Constraints (Suggested)
- $0 <= n <= 10^5$

## Approach
Define a lambda `is_even` and print values that satisfy it.

## Edge Cases
- No even numbers
