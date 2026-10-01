# Compiler Data Structures

This repository contains the first assignment for the compiler course and will
later serve as the foundation for the course mini-project. The implementation
language is C++20.

## Git repository

[https://github.com/benjaminbelloeil/Compiler](https://github.com/benjaminbelloeil/Compiler)

## Assignment scope

This assignment implements and documents these generic data structures:

- `Stack<T>` with LIFO behavior
- `Queue<T>` with FIFO behavior
- `HashTable<Key, Value>` with key-based lookup

Each structure supports its standard access and manipulation operations. The
demo in `src/main.cpp` exercises all three structures, while the programs under
`tests/` validate normal behavior, edge cases, and failures.

## Implementation

- Stack: wraps the public C++ Standard Library class `std::stack<T>`.
- Queue: wraps the public C++ Standard Library class `std::queue<T>`.
- Hash table: implemented from scratch with eight buckets and separate chaining
  through `std::vector`.

OpenAI Codex was used as a tutor and reviewer during implementation and testing.
The exact relevant prompts are recorded in `docs/ai-usage.md`, and the test
cases and results are documented in `docs/test-cases.md`.

## Project layout

```text
.
|-- include/
|   |-- hash_table.hpp
|   |-- queue.hpp
|   `-- stack.hpp
|-- src/
|   `-- main.cpp
|-- tests/
|   |-- hash_table_test.cpp
|   |-- queue_test.cpp
|   `-- stack_test.cpp
|-- docs/
|   |-- ai-usage.md
|   `-- test-cases.md
|-- CMakeLists.txt
`-- README.md
```

## Build and run

```bash
cmake -S . -B build
cmake --build build
./build/data_structures_demo
ctest --test-dir build --output-on-failure
```

## Submission checklist

- [x] Implement every public operation.
- [x] Demonstrate every structure in `src/main.cpp`.
- [x] Replace placeholder tests with meaningful test cases.
- [x] Update `docs/test-cases.md` with actual results.
- [x] Keep `docs/ai-usage.md` accurate as AI tools are used.
- [x] Commit and push the completed work to GitHub.
