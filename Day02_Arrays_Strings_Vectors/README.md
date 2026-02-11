# Day02_Arrays_Strings_Vectors

## Overview
This day focuses on the three workhorses of DSA in C++: arrays, strings, and vectors.
You will practice indexing, traversal, and basic algorithms on sequences.

## Learning Goals
- Read and write elements safely using indices
- Use `std::string` and `std::vector` for everyday tasks
- Implement simple scans (sum, max, reverse)

## Topics Covered
- Static arrays and indexing
- `std::string` basics (length, concatenation, input)
- `std::vector` operations (push, pop, size)
- Traversal and simple algorithms

## How to Use This Day
1. Run the examples to see basic patterns.
2. Solve the exercises without looking at solutions.
3. Compare your approach with the solutions.

## Tips
- Watch array bounds: valid indices are `0` to `n - 1`.
- Prefer `std::vector` when the size can change.

## Examples
Located in `examples/`
- `example_01.cpp` - Sum of elements in a fixed array
- `example_02.cpp` - String length and concatenation
- `example_03.cpp` - Vector push/pop and size
- `example_04.cpp` - Find max value in a vector

## Exercises
Located in `exercises/`
- `exercise_01.md` - Reverse an array
- `exercise_02.md` - Count vowels in a string
- `exercise_03.md` - Maximum value in a vector
- `exercise_04.md` - Rotate an array by k

## Solutions
Located in `solutions/`
- `solution_01.cpp`
- `solution_02.cpp`
- `solution_03.cpp`
- `solution_04.cpp`

## Deep Dive: Arrays vs Vectors
Arrays have fixed size and decay to pointers when passed to functions. Vectors
manage their own memory and can grow with `push_back`, making them safer and
more flexible for DSA problems.

## Deep Dive: String Input
`cin >> s` stops at whitespace, while `getline(cin, s)` reads the whole line.
When switching from `cin >>` to `getline`, read and discard the leftover newline.

## Pitfalls
- Accessing `arr[n]` is out of bounds when valid indices are `0..n-1`.
- Forgetting to handle `k % n` in rotation tasks.
- Using `cin >>` when the input may contain spaces.

## Mini-FAQ
**Q: When should I use `vector` instead of arrays?**
A: Use `vector` when size is not fixed or you want automatic memory management.

**Q: Is `string` just an array of characters?**
A: It is a class that manages a dynamic character buffer and provides helpers.

## Checklist
- [ ] I can traverse arrays and vectors safely.
- [ ] I can read a full line using `getline`.
- [ ] I can implement a simple scan (sum, max, reverse).

