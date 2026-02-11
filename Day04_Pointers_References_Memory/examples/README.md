# Examples

Pointer and reference fundamentals with small programs.

## How to Use
Run each example and use a debugger or print statements to inspect addresses.

## Files
- `example_01.cpp` - Pointer basics and dereference
- `example_02.cpp` - Reference aliasing
- `example_03.cpp` - Pointer arithmetic on arrays
- `example_04.cpp` - Dynamic array allocation

## Build and Run
```bash
g++ example_01.cpp -o example_01
./example_01
```

## What to Observe
- Pointer dereference and updates
- Reference aliasing behavior
- Dynamic allocation lifecycle

## Common Mistakes
- Using uninitialized pointers
- Forgetting to `delete[]` dynamic arrays

## Mini-FAQ
**Q: Why is pointer arithmetic useful?**
A: It lets you traverse arrays with raw pointers.
