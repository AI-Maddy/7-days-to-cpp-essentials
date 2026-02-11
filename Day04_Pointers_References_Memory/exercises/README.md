# Exercises

Practice pointer operations and dynamic memory safely.

## How to Solve
Initialize pointers, avoid dangling references, and always release memory.

## List
- `exercise_01.md` - Swap two numbers using pointers
- `exercise_02.md` - Sum of an array using pointers
- `exercise_03.md` - Allocate n integers and find max
- `exercise_04.md` - Reverse an array using pointers

## Workflow
1. Draw the memory layout before coding.
2. Allocate only what you need and free it once.
3. Test with small arrays and edge cases.

## Common Mistakes
- Dereferencing null or uninitialized pointers
- Using `delete` instead of `delete[]`

## Mini-FAQ
**Q: Can I use `vector` instead of `new[]`?**
A: The exercise is about pointers, so prefer manual allocation here.
