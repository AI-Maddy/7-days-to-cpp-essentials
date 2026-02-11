# Day04_Pointers_References_Memory

## Overview
Pointers and references are essential for understanding memory and building
low-level data structures. This day builds those fundamentals.

## Learning Goals
- Read and write through pointers safely
- Use references for cleaner function parameters
- Manage dynamic memory without leaks

## Topics Covered
- Pointer basics: address-of and dereference
- References as safe aliases
- Pointer arithmetic over arrays
- Dynamic memory with `new` and `delete`

## How to Use This Day
1. Run the examples to see pointer syntax in action.
2. Solve the exercises with careful attention to memory.
3. Compare your code against the solutions.

## Tips
- Always initialize pointers before use.
- Pair every `new[]` with `delete[]`.

## Examples
Located in `examples/`
- `example_01.cpp` - Pointer basics and dereference
- `example_02.cpp` - Reference aliasing
- `example_03.cpp` - Pointer arithmetic on arrays
- `example_04.cpp` - Dynamic array allocation

## Exercises
Located in `exercises/`
- `exercise_01.md` - Swap two numbers using pointers
- `exercise_02.md` - Sum of an array using pointers
- `exercise_03.md` - Allocate n integers and find max
- `exercise_04.md` - Reverse an array using pointers

## Solutions
Located in `solutions/`
- `solution_01.cpp`
- `solution_02.cpp`
- `solution_03.cpp`
- `solution_04.cpp`

## Deep Dive: Lifetimes and Ownership
Pointers are just addresses. The real question is ownership: who is responsible
for deleting the memory? If you allocate with `new` or `new[]`, you must release
with `delete` or `delete[]` exactly once.

## Deep Dive: References
References are aliases that cannot be null and cannot be reseated. Use them for
function parameters to avoid copies and improve clarity.

## Pitfalls
- Dereferencing a null or uninitialized pointer.
- Returning a pointer or reference to a local variable.
- Using `delete` on memory allocated with `new[]` (or vice versa).

## Mini-FAQ
**Q: Why use pointers if references are safer?**
A: Pointers are needed for dynamic arrays and optional values.

**Q: What is pointer arithmetic?**
A: Adding 1 moves to the next element of the pointed-to type, not the next byte.

## Checklist
- [ ] I can swap values using pointers.
- [ ] I can allocate and free dynamic arrays correctly.
- [ ] I can explain pointer arithmetic on arrays.

