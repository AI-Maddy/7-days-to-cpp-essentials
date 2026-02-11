# Exercise 01: Template Swap

## Task
Write a function template `swapValues` that swaps two values of the same type.

## Input
Two values `a` and `b` (same type).

## Output
Print the swapped values in the order `a b`.

## Example
Input:
```
3 9
```
Output:
```
9 3
```

## Notes
Use a temporary variable or `std::move` if you want.

## Concept Focus
- Function templates
- Passing by reference

## Constraints (Suggested)
- Values fit in basic types

## Approach
Write a template that swaps two values by reference.

## Edge Cases
- Values are equal
