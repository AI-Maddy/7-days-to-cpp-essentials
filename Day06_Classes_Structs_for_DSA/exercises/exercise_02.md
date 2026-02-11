# Exercise 02: Point Class

## Task
Create a `Point` class with `x` and `y`. Provide a method to compute the distance
from the origin and print it.

## Input
Two numbers `x` and `y`.

## Output
The distance from the origin.

## Example
Input:
```
3 4
```
Output:
```
5
```

## Notes
Distance formula: $d = \sqrt{x^2 + y^2}$.
Use `double` and `sqrt` from `<cmath>`.

## Concept Focus
- Class design
- Using member methods

## Constraints (Suggested)
- $-10^6 <= x, y <= 10^6$

## Approach
Create a class with `distanceToOrigin()` and print the result.

## Edge Cases
- `x = 0` and `y = 0`
