# Examples

Templates and fast input/output examples.

## How to Use
Run each example and test with different types or larger input sizes.
For `example_01.cpp`, try large input sizes to see why fast I/O matters.

## Fast I/O Explained
By default, C++ streams are synchronized with C stdio for safety, which adds
overhead. Fast I/O disables that sync and un-ties `cin` from `cout`:

```cpp
ios::sync_with_stdio(false);
cin.tie(nullptr);
```

This speeds up input-heavy programs but you should avoid mixing `printf` and
`cout` after disabling sync.

## Files
- `example_01.cpp` - Fast I/O and sum of numbers
- `example_02.cpp` - Function template for max
- `example_03.cpp` - Class template for a pair
- `example_04.cpp` - Template function to print a vector

## Build and Run
```bash
g++ example_01.cpp -o example_01
./example_01
```

## What to Observe
- Input speed differences with fast I/O
- Template reuse across multiple types
- Clean helper functions for reuse

## Common Mistakes
- Mixing `printf` and `cout` after disabling sync
- Defining template functions in a `.cpp` without headers

## Mini-FAQ
**Q: Why does fast I/O help?**
A: It removes synchronization and unnecessary flushing overhead.
