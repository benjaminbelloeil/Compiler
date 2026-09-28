# Compiler Data Structures

This repository contains the first assignment for the compiler course and will
later serve as the foundation for the course mini-project. The implementation
language is C++20.

## Assignment scope

Implement and document these generic data structures:

- `Stack<T>` with LIFO behavior
- `Queue<T>` with FIFO behavior
- `HashTable<Key, Value>` with key-based lookup

Each structure should support its standard access and manipulation operations.
The demo in `src/main.cpp` should exercise the structures, while the programs
under `tests/` should validate normal behavior, edge cases, and failures.

## Suggested implementations

- Stack: dynamically resized contiguous array
- Queue: circular buffer
- Hash table: separate chaining for collision handling

The starter headers intentionally contain incomplete implementations. Complete
the marked `TODO` sections and replace each placeholder test with meaningful
assertions.

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

- [ ] Implement every public operation.
- [ ] Demonstrate every structure in `src/main.cpp`.
- [ ] Replace placeholder tests with meaningful test cases.
- [ ] Update `docs/test-cases.md` with actual results.
- [ ] Keep `docs/ai-usage.md` accurate as AI tools are used.
- [ ] Commit the completed work to Git.

