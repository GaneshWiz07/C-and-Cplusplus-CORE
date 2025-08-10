## C-and-Cplusplus-CORE

A collection of small C (and C/C++) concept demos: standard I/O, operators, arrays, and more. This repo is intended for learning and quick reference.

### Prerequisites
- Windows: Install MinGW-w64 (GCC). Ensure `gcc` is on your PATH.
- Editor: VS Code recommended.

### Build and Run (Windows PowerShell)
- Compile and run one file:
  ```powershell
  gcc "C-CONCEPTS\std-input-output.c" -o stdio.exe; .\stdio.exe
  ```
  Note: In Windows PowerShell 5.x, use `;` to separate commands. The `&&` separator works in PowerShell 7+ or CMD.

- Provide input non-interactively (example for programs using scanf/getchar/fgets):
  ```powershell
  echo 123 | .\stdio.exe
  ```

- Another example:
  ```powershell
  gcc "C-CONCEPTS\arrays.c" -o arrays.exe; .\arrays.exe
  ```

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

### Project Structure (high-level)
- `C-CONCEPTS/std-input-output.c`: Demonstrates `printf/scanf`, `getchar`, `putchar`, `fgets`, `fputs` and input buffering.
- `C-CONCEPTS/operators.c`: Arithmetic, relational, logical, and other operators (WIP if not yet implemented).
- `C-CONCEPTS/arrays.c`: 1D/2D arrays, array-of-strings patterns, `sizeof` usage, and element access.

### Common C Tips Used Here
- Booleans: include `#include <stdbool.h>`; print with `%d`.
- `%c` with scanf: use a leading space to skip leftover whitespace, e.g., `scanf(" %c", &ch);`.
- Mixing `scanf` and `fgets`: newline remains in the input buffer after `scanf`. Clear it or prefer `fgets` + `sscanf`:
  ```c
  int ch; while ((ch = getchar()) != '\n' && ch != EOF) {}
  ```
- `fgets` keeps the newline: remove it if needed:
  ```c
  name[strcspn(name, "\n")] = '\0';
  ```
- Print sizes/lengths portably: `size_t` with `%zu` (e.g., `printf("%zu\n", n);`).
- Arrays of strings:
  - Immutable literals: `const char *words[] = {"Hello", "World"};`
  - Fixed-width modifiable: `char words[4][16] = {"Hello", ...};`

### PowerShell Notes
- Paths with spaces need quotes: `cd "S:\\GITHUB PROJECTS\\C-and-Cplusplus-CORE"`.
- `;` separates commands in Windows PowerShell 5.x. Use separate lines if preferred.

### Commands Cheat Sheet
```powershell
# Build and run std I/O demo
gcc "C-CONCEPTS\std-input-output.c" -o stdio.exe; .\stdio.exe

# Build and run arrays demo
gcc "C-CONCEPTS\arrays.c" -o arrays.exe; .\arrays.exe

# Pipe input to a program
echo 42 | .\stdio.exe
```

### License
Licensed under the MIT License. See [`LICENSE`](LICENSE) for details.


