# Exercises

Practice templates and fast I/O.

## How to Solve
Test templates with at least two different types to confirm correctness.

## List
- `exercise_01.md` - Template swap function
- `exercise_02.md` - Template min of three
- `exercise_03.md` - Fast I/O sum of n numbers
- `exercise_04.md` - Template search in a vector

## Workflow
1. Write the template function first and test with two types.
2. Add fast I/O setup when required.
3. Confirm output format exactly matches the task.

## Common Mistakes
- Forgetting `template <typename T>`
- Mixing `printf` with fast `cin/cout`

## Mini-FAQ
**Q: Can a template return different types?**
A: Not for a single instantiation; use overloading or `auto` when needed.
