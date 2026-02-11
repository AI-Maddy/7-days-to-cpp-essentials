# Day07_FastIO_Templates_Organization

## Overview
This day introduces templates for generic programming and fast I/O for
competitive coding.

## Learning Goals
- Write function and class templates
- Use fast input/output patterns correctly
- Keep code organized and reusable

## Topics Covered
- Fast input/output setup
- Function templates
- Class templates
- Simple code organization patterns

## How to Use This Day
1. Run the examples to see templates in action.
2. Solve the exercises and test with different types.
3. Review solutions to confirm correctness.

## Tips
- Prefer type inference where possible for simpler code.
- Use fast I/O only when input size is large.

## Examples
Located in `examples/`
- `example_01.cpp` - Fast I/O and sum of numbers
- `example_02.cpp` - Function template for max
- `example_03.cpp` - Class template for a pair
- `example_04.cpp` - Template function to print a vector

## Exercises
Located in `exercises/`
- `exercise_01.md` - Template swap function
- `exercise_02.md` - Template min of three
- `exercise_03.md` - Fast I/O sum of n numbers
- `exercise_04.md` - Template search in a vector

## Solutions
Located in `solutions/`
- `solution_01.cpp`
- `solution_02.cpp`
- `solution_03.cpp`
- `solution_04.cpp`

## Deep Dive: Fast I/O
Competitive programming often involves large inputs. The default I/O setup
is safe but slower because it synchronizes C++ streams with C stdio and flushes
`cout` when `cin` reads. You can speed this up with:

```cpp
ios::sync_with_stdio(false);
cin.tie(nullptr);
```

- `sync_with_stdio(false)` disables the C stdio sync.
- `cin.tie(nullptr)` prevents automatic flushing of `cout` before `cin`.

Use fast I/O when input size is large. Keep it off if you are mixing `printf`
and `cout`, because that can lead to unexpected output order.

## Deep Dive: Templates
Templates let you write one function or class that works with many types.
They are compile-time blueprints, not runtime polymorphism. This reduces code
duplication and is ideal for reusable utilities in DSA.

## Pitfalls
- Forgetting to enable fast I/O on large inputs can cause timeouts.
- Mixing `scanf/printf` with `cin/cout` after disabling sync can break ordering.
- Templates require all definitions to be visible at compile time.

## Mini-FAQ
**Q: When should I use fast I/O?**
A: When input size is large (e.g., $10^5$ lines or more).

**Q: Can templates slow code?**
A: Usually no. Most template code is optimized away at compile time.

**Q: Why not always use fast I/O?**
A: It is safe for most cases, but if you mix C and C++ I/O it can cause issues.

## Checklist
- [ ] I understand why `sync_with_stdio(false)` speeds up I/O.
- [ ] I can write a function template and use it with multiple types.
- [ ] I can explain the difference between class templates and function templates.

