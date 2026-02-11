# Examples

These short programs reinforce syntax, input/output, and basic arithmetic.

## How to Use
Build and run each file, then modify inputs to observe behavior. Focus on how
`cin` and `cout` are used and how types affect results.

## Files
- `example_01.cpp` - Read a name and age, then print a greeting
- `example_02.cpp` - Basic arithmetic with two integers
- `example_03.cpp` - Integer vs double division
- `example_04.cpp` - ASCII code of a character

## Build and Run
```bash
g++ example_01.cpp -o example_01
./example_01
```

## What to Observe
- Input handling with `cin` and `getline`
- Type behavior in arithmetic
- Output formatting and newlines

## Common Mistakes
- Forgetting to include required headers
- Mixing `getline` after `cin >>` without clearing newline

## Mini-FAQ
**Q: Why does input skip spaces?**
A: `cin >>` reads tokens; use `getline` for full lines.
