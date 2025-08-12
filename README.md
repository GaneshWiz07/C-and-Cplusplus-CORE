## C-and-Cplusplus-CORE

A comprehensive collection of C and C++ programming concepts and examples. This repository serves as a learning resource and quick reference for fundamental programming concepts, data structures, and object-oriented programming principles.

### Prerequisites
- **Windows**: Install MinGW-w64 (GCC/G++). Ensure `gcc` and `g++` are on your PATH.
- **Editor**: VS Code recommended with C/C++ extensions.

### Build and Run (Windows PowerShell)

#### For C Programs:
```powershell
# Compile and run C programs
gcc "C-CONCEPTS\std-input-output.c" -o stdio.exe; .\stdio.exe
gcc "C-CONCEPTS\arrays.c" -o arrays.exe; .\arrays.exe
```

#### For C++ Programs:
```powershell
# Compile and run C++ programs
g++ "C++ CONCEPTS\arrays.cpp" -o arrays.exe; .\arrays.exe
g++ "C++ CONCEPTS\OOP\class-object.cpp" -o class-object.exe; .\class-object.exe
```

#### Input Handling:
```powershell
# Provide input non-interactively
echo 123 | .\stdio.exe
```

**Note**: In Windows PowerShell 5.x, use `;` to separate commands. The `&&` separator works in PowerShell 7+ or CMD.

### Recommended VS Code Setup
- Use the Integrated Terminal (Ctrl+`).
- If using the Code Runner extension: enable “Run In Terminal”. Add to Settings (JSON):
  ```json
  {
    "code-runner.runInTerminal": true
  }
  ```
- If you use the debugger, set the console to the integrated terminal in `launch.json`:
  ```json
  {
    "console": "integratedTerminal"
  }
  ```

### Project Structure

#### 📁 C-CONCEPTS/
**Core C Programming Concepts**
- `arrays.c` - Array operations, multidimensional arrays, and memory addressing
- `control-statements.c` - if-else, switch-case statements
- `enums.c` - Enumeration types and usage
- `functions.c` - Function declarations, definitions, and calls
- `loops.c` - for, while, do-while loops
- `math.c` - Mathematical operations and functions
- `operators.c` - Arithmetic, relational, logical, bitwise operators
- `pointers.c` - Pointer basics, pointer arithmetic
- `std-input-output.c` - printf/scanf, getchar, putchar, fgets, fputs
- `string.c` - String manipulation and functions
- `struct.c` - Structure definitions and usage
- `typedef.c` - Type definitions and aliases
- `variables.c` - Variable declarations and data types

**📁 dynamic_sizing/** - Dynamic Memory Management
- `calloc.c` - Memory allocation with calloc()
- `malloc.c` - Dynamic memory allocation with malloc()
- `realloc.c` - Memory reallocation with realloc()

**📁 fileops/** - File Operations
- `read-write.c` - File I/O operations
- `file.txt` - Sample data file

#### 📁 C++ CONCEPTS/
**Core C++ Programming Concepts**
- `arrays.cpp` - Array handling, multidimensional arrays, fill method
- `control-statements.cpp` - C++ control flow statements
- `datatypes.cpp` - C++ data types and declarations
- `enums.cpp` - C++ enumeration types
- `loops.cpp` - C++ loop constructs
- `math-functions.cpp` - Mathematical functions in C++
- `namespaces.cpp` - Namespace usage and scope
- `operators.cpp` - C++ operator overloading and usage
- `rand-method.cpp` - Random number generation
- `sizeof-method.cpp` - sizeof operator usage
- `std-input-output.cpp` - C++ I/O streams (cin, cout)
- `string-methods.cpp` - C++ string class methods
- `struct.cpp` - C++ structures
- `type-conversion.cpp` - Type casting and conversion
- `typedef.cpp` - Type aliases in C++

**📁 OOP/** - Object-Oriented Programming
- `class-object.cpp` - Class definitions and object creation
- `constructors.cpp` - Constructor types and usage
- `constructor-overload.cpp` - Constructor overloading
- `getters-setters.cpp` - Encapsulation with accessor methods
- `access-modifiers.cpp` - Public, private, protected access
- `inheritance.cpp` - Class inheritance and derived classes
- `polymorphism.cpp` - Virtual functions and polymorphism

### Learning Path Recommendations

#### 🎯 **Beginner (Start Here)**
1. **C Basics**: `variables.c`, `operators.c`, `std-input-output.c`
2. **Control Flow**: `control-statements.c`, `loops.c`
3. **Data Structures**: `arrays.c`, `string.c`, `struct.c`
4. **Functions**: `functions.c`, `typedef.c`

#### 🎯 **Intermediate**
1. **Memory Management**: `pointers.c`, `dynamic_sizing/` folder
2. **File Operations**: `fileops/read-write.c`
3. **C++ Transition**: `std-input-output.cpp`, `arrays.cpp`, `string-methods.cpp`
4. **Advanced C++**: `namespaces.cpp`, `type-conversion.cpp`

#### 🎯 **Advanced (OOP)**
1. **Classes**: `OOP/class-object.cpp`, `OOP/constructors.cpp`
2. **Encapsulation**: `OOP/getters-setters.cpp`, `OOP/access-modifiers.cpp`
3. **Inheritance**: `OOP/inheritance.cpp`
4. **Polymorphism**: `OOP/polymorphism.cpp`

### Programming Tips & Best Practices

#### 💡 **Common C Tips**
- **Booleans**: Include `#include <stdbool.h>`; print with `%d`
- **scanf with %c**: Use leading space to skip whitespace: `scanf(" %c", &ch);`
- **Buffer clearing after scanf**: 
  ```c
  int ch; while ((ch = getchar()) != '\n' && ch != EOF) {}
  ```
- **fgets newline removal**:
  ```c
  name[strcspn(name, "\n")] = '\0';
  ```
- **Portable size printing**: Use `%zu` for `size_t` values
- **String arrays**:
  - Immutable: `const char *words[] = {"Hello", "World"};`
  - Modifiable: `char words[4][16] = {"Hello", ...};`

#### 💡 **C++ Specific Tips**
- **Prefer `cout/cin`** over `printf/scanf` for type safety
- **Use `std::string`** instead of char arrays when possible
- **Range-based loops**: `for(auto element : container)`
- **Constructor initialization lists** for better performance
- **Virtual destructors** in base classes for proper cleanup
- **RAII principle**: Resource Acquisition Is Initialization

### PowerShell Notes
- Paths with spaces need quotes: `cd "S:\\GITHUB PROJECTS\\C-and-Cplusplus-CORE"`.
- `;` separates commands in Windows PowerShell 5.x. Use separate lines if preferred.

### Commands Cheat Sheet

#### C Programs:
```powershell
# Basic C concepts
gcc "C-CONCEPTS\std-input-output.c" -o stdio.exe; .\stdio.exe
gcc "C-CONCEPTS\arrays.c" -o arrays.exe; .\arrays.exe
gcc "C-CONCEPTS\operators.c" -o operators.exe; .\operators.exe
gcc "C-CONCEPTS\loops.c" -o loops.exe; .\loops.exe
gcc "C-CONCEPTS\functions.c" -o functions.exe; .\functions.exe

# Dynamic memory management
gcc "C-CONCEPTS\dynamic_sizing\malloc.c" -o malloc.exe; .\malloc.exe
gcc "C-CONCEPTS\dynamic_sizing\calloc.c" -o calloc.exe; .\calloc.exe

# File operations
gcc "C-CONCEPTS\fileops\read-write.c" -o read-write.exe; .\read-write.exe
```

#### C++ Programs:
```powershell
# Basic C++ concepts
g++ "C++ CONCEPTS\arrays.cpp" -o arrays.exe; .\arrays.exe
g++ "C++ CONCEPTS\std-input-output.cpp" -o stdio.exe; .\stdio.exe
g++ "C++ CONCEPTS\string-methods.cpp" -o string.exe; .\string.exe
g++ "C++ CONCEPTS\operators.cpp" -o operators.exe; .\operators.exe

# Object-Oriented Programming
g++ "C++ CONCEPTS\OOP\class-object.cpp" -o class-object.exe; .\class-object.exe
g++ "C++ CONCEPTS\OOP\constructors.cpp" -o constructors.exe; .\constructors.exe
g++ "C++ CONCEPTS\OOP\inheritance.cpp" -o inheritance.exe; .\inheritance.exe
g++ "C++ CONCEPTS\OOP\polymorphism.cpp" -o polymorphism.exe; .\polymorphism.exe
```

#### Utility Commands:
```powershell
# Pipe input to a program
echo 42 | .\stdio.exe

# Clean all executable files
Get-ChildItem -Recurse -Filter "*.exe" | Remove-Item -Force

# Compile with debugging information
gcc -g "C-CONCEPTS\arrays.c" -o arrays.exe
g++ -g "C++ CONCEPTS\OOP\class-object.cpp" -o class-object.exe
```

### License
Licensed under the MIT License. See [`LICENSE`](LICENSE) for details.


