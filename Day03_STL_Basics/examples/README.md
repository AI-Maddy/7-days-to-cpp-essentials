# Examples

STL container practice: vector, set, unordered_set, and map.

## How to Use
Run each example and observe how containers change after operations.

## Files
- `example_01.cpp` - Sort and remove duplicates from a vector
- `example_02.cpp` - Basic set operations
- `example_03.cpp` - Membership checks with unordered_set
- `example_04.cpp` - Word frequency using map

## Build and Run
```bash
g++ example_01.cpp -o example_01
./example_01
```

## What to Observe
- How containers store data (ordered vs unordered)
- The effect of insert/erase operations
- Iteration patterns

## Common Mistakes
- Expecting `unordered_set` to maintain order
- Iterating while modifying containers unsafely

## Mini-FAQ
**Q: When is `map` better than `unordered_map`?**
A: When you need keys in sorted order.
