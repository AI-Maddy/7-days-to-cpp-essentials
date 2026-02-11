# Exercise 02: Fahrenheit to Celsius

## Task
Read a temperature in Fahrenheit and convert it to Celsius.

## Input
A single number `F` (Fahrenheit).

## Output
The temperature in Celsius using the formula:
$C = (F - 32) * 5 / 9$

## Example
Input:
```
98.6
```
Output:
```
37
```

## Notes
Use `double` to avoid precision loss. You can print without formatting or
use `fixed` with 2 decimals if you want consistent output.

## Concept Focus
- Type casting and decimal math
- Input of floating-point values

## Constraints (Suggested)
- $-1000 <= F <= 1000$

## Approach
Apply $C = (F - 32) * 5 / 9$ and print the result.

## Edge Cases
- Negative temperatures
- Values that produce long decimals
