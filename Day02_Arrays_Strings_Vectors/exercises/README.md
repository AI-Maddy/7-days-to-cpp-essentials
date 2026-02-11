# Exercises

Solve each problem using arrays, strings, or vectors.

## How to Solve
Use `std::vector` or `std::string` unless the task requires a raw array.
Keep output formatting exact.

## List
- `exercise_01.md` - Reverse an array
- `exercise_02.md` - Count vowels in a string
- `exercise_03.md` - Maximum value in a vector
- `exercise_04.md` - Rotate an array by k

## Workflow
1. Handle input sizes and edge cases (`n = 0`, `k >= n`).
2. Choose array or vector based on the task.
3. Verify output spacing carefully.

## Common Mistakes
- Off-by-one errors in loops
- Forgetting to reduce `k` with `k % n`

## Mini-FAQ
**Q: Can I use `std::reverse`?**
A: Yes, unless the exercise asks you to implement manually.
