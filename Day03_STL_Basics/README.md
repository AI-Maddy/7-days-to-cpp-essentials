# Day03_STL_Basics

## Overview
This day introduces core STL containers and how they help you solve DSA problems
with clean and fast code.

## Learning Goals
- Pick the right container for the job
- Use `set`/`unordered_set` for uniqueness and membership
- Use `map`/`unordered_map` for counting and lookup

## Topics Covered
- `vector` usage and sorting
- `set` and `unordered_set` for uniqueness and membership
- `map` and `unordered_map` for counting and lookup
- Iteration patterns over STL containers

## How to Use This Day
1. Run the examples and note the outputs.
2. Solve the exercises using STL containers only.
3. Review solution styles and complexity.

## Tips
- `set` is ordered; `unordered_set` is faster on average but unordered.
- `map` keeps keys sorted; `unordered_map` does not.

## Examples
Located in `examples/`
- `example_01.cpp` - Sort and remove duplicates from a vector
- `example_02.cpp` - Basic `set` operations
- `example_03.cpp` - Membership checks with `unordered_set`
- `example_04.cpp` - Word frequency using `map`

## Exercises
Located in `exercises/`
- `exercise_01.md` - Count distinct numbers
- `exercise_02.md` - Frequency map of numbers
- `exercise_03.md` - First repeating element
- `exercise_04.md` - Check if two strings are anagrams

## Solutions
Located in `solutions/`
- `solution_01.cpp`
- `solution_02.cpp`
- `solution_03.cpp`
- `solution_04.cpp`

## Deep Dive: Ordered vs Unordered
`set` and `map` store keys in sorted order (usually balanced trees). This gives
log-time operations and ordered iteration. `unordered_set` and `unordered_map`
use hashing for average constant-time operations but no ordering guarantees.

## Deep Dive: Complexity Intuition
If you need sorted output, use ordered containers. If you only need fast lookup,
use unordered containers and plan for worst-case behavior in adversarial inputs.

## Pitfalls
- Forgetting that `unordered_*` containers do not preserve order.
- Using `map` when a `vector` or `array` would be faster for small key ranges.
- Modifying a container while iterating without care.

## Mini-FAQ
**Q: Why is `unordered_map` sometimes slower than `map`?**
A: Hashing overhead and poor hash distribution can hurt performance.

**Q: Can I sort a `set`?**
A: It is always sorted by its comparator; you cannot reorder it arbitrarily.

## Checklist
- [ ] I can choose between `set` and `unordered_set`.
- [ ] I can build a frequency map with `map` or `unordered_map`.
- [ ] I can iterate over containers using range-based for loops.

