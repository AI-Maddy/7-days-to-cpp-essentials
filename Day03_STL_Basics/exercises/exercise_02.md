# Exercise 02: Frequency Map

## Task
Read `n` integers and print each distinct number with its frequency in ascending order.

## Input
- Integer `n`
- `n` integers

## Output
Each line should be `value count` in ascending order of `value`.

## Example
Input:
```
5
3 1 3 2 1
```
Output:
```
1 2
2 1
3 2
```

## Notes
Use a `map<int, int>` to count and keep keys sorted.

## Concept Focus
- Frequency counting
- Ordered output with `map`

## Constraints (Suggested)
- $1 <= n <= 2 * 10^5$

## Approach
Increment `freq[value]` for each input, then iterate over the map.

## Edge Cases
- Single value input
