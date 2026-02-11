# Day06_Classes_Structs_for_DSA

## Overview
Structs and classes let you model nodes and build small data structures used in DSA.
You will practice constructors and basic methods.

## Learning Goals
- Create structs for nodes and records
- Build small classes with constructors and methods
- Encapsulate behavior with clean interfaces

## Topics Covered
- Structs for nodes (linked lists)
- Classes with constructors and methods
- Encapsulation of simple data structures

## How to Use This Day
1. Run the examples to understand class layout.
2. Implement the exercises and test with input cases.
3. Compare with the solutions and refactor.

## Tips
- Keep members private by default and expose methods.
- Use constructors to initialize all fields.

## Examples
Located in `examples/`
- `example_01.cpp` - Simple linked list node
- `example_02.cpp` - Stack class using `vector`
- `example_03.cpp` - Rectangle class with methods
- `example_04.cpp` - Student struct with helper method

## Exercises
Located in `exercises/`
- `exercise_01.md` - Insert at head and print a linked list
- `exercise_02.md` - Point class and distance to origin
- `exercise_03.md` - Queue using linked list nodes
- `exercise_04.md` - Bank account class

## Solutions
Located in `solutions/`
- `solution_01.cpp`
- `solution_02.cpp`
- `solution_03.cpp`
- `solution_04.cpp`

## Deep Dive: Struct vs Class
In C++, `struct` and `class` are the same except for default access. `struct`
defaults to public members, while `class` defaults to private. Use `struct` for
plain data and `class` for behavior-heavy types.

## Deep Dive: Constructors
Constructors ensure your objects are initialized correctly. Prefer initializer
lists for member setup, especially for const members.

## Pitfalls
- Forgetting to initialize all fields.
- Exposing internal data that should be private.
- Memory leaks in manually managed structures.

## Mini-FAQ
**Q: Should I always write getters/setters?**
A: Only when you need validation or invariants. Keep it simple otherwise.

**Q: Can a `struct` have methods?**
A: Yes, just like a class.

## Checklist
- [ ] I can define a node struct for a linked list.
- [ ] I can write a small class with methods.
- [ ] I can explain encapsulation.

