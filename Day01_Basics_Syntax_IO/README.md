# **Day 01 — C++ Basics, Syntax & Input/Output**

## **1. Welcome to Day 1**
C++ is one of the most influential programming languages ever created. It powers operating systems, game engines, browsers, embedded systems, high‑performance computing, and modern AI infrastructure.  
This first day lays the foundation: syntax, structure, compilation, variables, data types, and input/output.

By the end of today, you’ll be able to:

- Write and compile your first C++ program  
- Understand how C++ code is structured  
- Use variables and primitive data types  
- Perform input/output using `cin` and `cout`  
- Understand namespaces, headers, and the compilation pipeline  
- Build confidence for the rest of the week  

---

## **2. Why C++ Still Matters**
C++ remains essential because it offers:

- **Speed** — near‑metal performance  
- **Control** — memory, pointers, low‑level access  
- **Scalability** — used in billion‑line codebases  
- **Portability** — runs on almost every platform  
- **Longevity** — 40+ years and still evolving  

If you master C++, you gain a deep understanding of how computers actually work.

---

## **3. Structure of a C++ Program**
Every C++ program follows a predictable structure:

```cpp
#include <iostream>   // Preprocessor directive

using namespace std;  // Namespace declaration

int main() {          // Entry point
    cout << "Hello, World!";
    return 0;
}
```

### **Breakdown**
- `#include <iostream>`  
  Tells the compiler to include the I/O library.

- `using namespace std;`  
  Allows writing `cout` instead of `std::cout`.

- `int main()`  
  The starting point of every C++ program.

- `return 0;`  
  Indicates successful execution.

---

## **4. Compilation Pipeline**
C++ is a compiled language. The steps:

1. **Preprocessing**  
   Expands macros, includes headers.

2. **Compilation**  
   Converts C++ to assembly.

3. **Assembly**  
   Converts assembly to machine code.

4. **Linking**  
   Combines object files + libraries → executable.

### **Example (G++)**
```bash
g++ main.cpp -o main
./main
```

---

## **5. Variables & Data Types**
C++ is statically typed. You must declare the type before use.

### **Primitive Types**
| Type | Example | Size | Notes |
|------|---------|------|-------|
| `int` | 10 | 4 bytes | Whole numbers |
| `float` | 3.14f | 4 bytes | Decimal (less precise) |
| `double` | 3.14159 | 8 bytes | More precise |
| `char` | 'A' | 1 byte | Single character |
| `bool` | true/false | 1 byte | Logical values |

### **Declaration Examples**
```cpp
int age = 21;
double price = 99.99;
char grade = 'A';
bool isOnline = true;
```

---

## **6. Input & Output**
C++ uses the stream system.

### **Output**
```cpp
cout << "Welcome to C++!";
```

### **Input**
```cpp
int x;
cin >> x;
```

### **Chaining**
```cpp
int a, b;
cin >> a >> b;
cout << "Sum = " << a + b;
```

---

## **7. Comments**
### **Single-line**
```cpp
// This is a comment
```

### **Multi-line**
```cpp
/*
   This is a multi-line comment
*/
```

---

## **8. Constants**
Use `const` to prevent modification.

```cpp
const double PI = 3.14159;
```

---

## **9. Escape Sequences**
| Sequence | Meaning |
|----------|---------|
| `\n` | New line |
| `\t` | Tab |
| `\"` | Double quote |
| `\\` | Backslash |

Example:
```cpp
cout << "Hello\nWorld";
```

---

## **10. ASCII & Characters**
Characters are stored as integers internally.

```cpp
char c = 'A';
cout << int(c);   // prints 65
```

---

## **11. Basic Arithmetic**
```cpp
int a = 10, b = 3;
cout << a + b;
cout << a - b;
cout << a * b;
cout << a / b;
cout << a % b;
```

---

## **12. Type Casting**
### **Implicit**
```cpp
double x = 10;   // int → double
```

### **Explicit**
```cpp
double x = (double)5 / 2;  // 2.5
```

---

## **13. Understanding `main()` Return Values**
```cpp
return 0;   // success
return 1;   // error
```

---

## **14. Common Beginner Mistakes**
- Missing semicolon  
- Forgetting `#include <iostream>`  
- Using `cin` without declaring variables  
- Using uninitialized variables  
- Confusing `'A'` with `"A"`  

---

## **15. ASCII Diagram — Compilation Flow**

```
 ┌──────────────┐
 │  Source Code │  main.cpp
 └───────┬──────┘
         │ Preprocessor
 ┌───────▼──────┐
 │  Expanded    │
 │  Source      │
 └───────┬──────┘
         │ Compiler
 ┌───────▼──────┐
 │  Assembly    │
 └───────┬──────┘
         │ Assembler
 ┌───────▼──────┐
 │ Machine Code │
 └───────┬──────┘
         │ Linker
 ┌───────▼────────┐
 │  Executable    │
 └────────────────┘
```

---

## **16. Example Programs (Full Code)**

### **Example 1 — Basic Output**
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, C++!";
    return 0;
}
```

### **Example 2 — Input Two Numbers**
```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << "Sum = " << a + b;
    return 0;
}
```

### **Example 3 — Using Escape Sequences**
```cpp
cout << "Line1\nLine2\nLine3";
```

### **Example 4 — Character to ASCII**
```cpp
char c = 'Z';
cout << int(c);
```

---

## **17. Exercises (Your Turn)**

### **Exercise 1 — Print Your Name**
Write a program that prints your name on three separate lines.

### **Exercise 2 — Simple Calculator**
Take two integers as input and print:
- Sum  
- Difference  
- Product  
- Quotient  

### **Exercise 3 — ASCII Explorer**
Input a character and print its ASCII value.

### **Exercise 4 — Temperature Converter**
Input Celsius → print Fahrenheit.

---

## **18. Practice Files**
Use the files below to move from reading to doing. Run each example first,
then solve the exercises, and only then compare with the solutions.

Examples in `examples/`:
- `example_01.cpp` - Read name and age, print a greeting
- `example_02.cpp` - Basic arithmetic with two integers
- `example_03.cpp` - Integer vs double division
- `example_04.cpp` - ASCII code of a character

Exercises in `exercises/`:
- `exercise_01.md` - Sum of two numbers
- `exercise_02.md` - Fahrenheit to Celsius
- `exercise_03.md` - Simple interest calculator
- `exercise_04.md` - Rectangle area and perimeter

Solutions in `solutions/`:
- `solution_01.cpp`
- `solution_02.cpp`
- `solution_03.cpp`
- `solution_04.cpp`

---

## **19. Interview-Style Questions**
- What is the difference between a compiler and an interpreter  
- Why does C++ require a `main()` function  
- What is the purpose of `#include`  
- What is the difference between `float` and `double`  
- Why is C++ considered statically typed  

---

## **20. Summary**
Today you learned:

- How C++ programs are structured  
- How compilation works  
- Variables, data types, constants  
- Input/output using streams  
- Basic arithmetic and type casting  
- Common pitfalls and best practices  

This foundation prepares you for Day 2: **Arrays, Strings & Vectors**.

---

## **21. Deep Dive: Streams and Formatting**
`cin` and `cout` are type-safe stream objects. They parse and print data based
on the variable type. You can chain them and use manipulators like `fixed` and
`setprecision` (from `<iomanip>`) for formatting decimal output.

## **22. Pitfalls**
- Integer division truncates results (e.g., `5 / 2` is `2`).
- Mixing `getline` after `cin >>` requires consuming the leftover newline.
- Uninitialized variables lead to unpredictable behavior.

## **23. Mini-FAQ**
**Q: Do I always need `using namespace std;`?**
A: No. You can write `std::cout` and avoid potential name conflicts.

**Q: Why does `cin` skip spaces?**
A: `cin >>` reads tokens separated by whitespace; use `getline` for full lines.

## **24. Checklist**
- [ ] I can write a minimal C++ program and compile it.
- [ ] I can read from `cin` and print with `cout`.
- [ ] I can explain the difference between `int` and `double`.