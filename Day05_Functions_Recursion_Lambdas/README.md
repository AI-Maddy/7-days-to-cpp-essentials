# Day05_Functions_Recursion_Lambdas

## Overview
This day focuses on writing reusable functions, understanding recursion, and
using lambdas for concise logic.

## Learning Goals
- Pass data correctly using values and references
- Design correct recursive base cases
- Use lambdas for quick, local behavior

## Topics Covered
- Functions and parameter passing
- Recursion patterns and base cases
- Lambda expressions and custom behavior

## How to Use This Day
1. Run the examples to see each concept in isolation.
2. Solve the exercises and test with small inputs.
3. Inspect solutions for cleaner patterns.

## Tips
- Every recursive function must have a clear base case.
- Prefer iteration for large inputs to avoid deep recursion.

## Examples
Located in `examples/`
- `example_01.cpp` - Pass by value vs pass by reference
- `example_02.cpp` - Recursive factorial
- `example_03.cpp` - Recursive Fibonacci (small n)
- `example_04.cpp` - Sorting with a lambda comparator

## Exercises
Located in `exercises/`
- `exercise_01.md` - GCD using recursion
- `exercise_02.md` - Power using recursion
- `exercise_03.md` - Count digits recursively
- `exercise_04.md` - Print even numbers using a lambda

## Solutions
Located in `solutions/`
- `solution_01.cpp`
- `solution_02.cpp`
- `solution_03.cpp`
- `solution_04.cpp`

## Deep Dive: Recursion Mechanics
Each recursive call adds a new stack frame. The base case stops recursion and
prevents stack overflow. For large inputs, prefer iterative solutions.

## Deep Dive: Lambdas
Lambdas are anonymous functions that can capture variables from surrounding
scope. Use them for short, local logic like custom comparators.

## Pitfalls
- Missing or incorrect base cases in recursion.
- Exponential time in naive recursive solutions (e.g., Fibonacci).
- Capturing references to variables that go out of scope.

## Mini-FAQ
**Q: When should I use recursion?**
A: When the problem is naturally recursive and input size is moderate.

**Q: Are lambdas slower than normal functions?**
A: Typically no. Most are inlined by the compiler.

## Checklist
- [ ] I can implement a recursive function with a base case.
- [ ] I can explain pass-by-reference vs pass-by-value.
- [ ] I can use a lambda in `sort` or `for_each`.

