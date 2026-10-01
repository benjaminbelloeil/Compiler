# Test Cases

Tests were compiled with CMake and executed with CTest on October 1, 2026:

```text
3/3 test executables passed
stack_test: passed
queue_test: passed
hash_table_test: passed
```

The demonstration program also completed successfully.

## Stack

Implementation: `Stack<T>` wraps the public C++ Standard Library class
`std::stack<T>`.

|          Case           |            Expected result                |              Actual result          | Status |
|-------------------------|-------------------------------------------|-------------------------------------|--------|
| New stack               | `empty()` is true and `size()` is 0       | Both conditions were true           | Passed |
| Push one value          | `top()` returns 10 and size is 1          | Top was 10 and size was 1           | Passed |
| Push multiple values    | The last pushed value, 30, is at the top  | Top was 30                          | Passed |
| Inspect top             | Calling `top()` does not remove the value | Top remained 30 and size remained 3 | Passed |
| Pop multiple values     | Values are returned as 30, 20, 10         | Values were returned in LIFO order  | Passed |
| Pop an empty stack      | `std::out_of_range` is thrown             | Exception was caught                | Passed |
| Read top of empty stack | `std::out_of_range` is thrown             | Exception was caught                | Passed |
| Generic string values   | Values are returned as Benjamin, Ana      | Strings were returned in LIFO order | Passed |

Capacity growth is managed by `std::stack` and its underlying Standard Library
container; the wrapper does not implement or expose a capacity operation.

## Queue

Implementation: `Queue<T>` wraps the public C++ Standard Library class
`std::queue<T>`.

|              Case                |            Expected result              |            Actual result             | Status  |
|----------------------------------|-----------------------------------------|--------------------------------------|---------|
| New queue                        | `empty()` is true and `size()` is 0     | Both conditions were true            | Passed  |
| Enqueue multiple values          | Size becomes 3                          | Size was 3                           | Passed  |
| Inspect ends                     | `front()` is 10 and `back()` is 30      | Front was 10 and back was 30         | Passed  |
| Dequeue multiple values          | Values are returned as 10, 20, 30       | Values were returned in FIFO order   | Passed  |
| Empty after dequeue              | Queue is empty and size is 0            | Both conditions were true            | Passed  |
| Dequeue an empty queue           | `std::out_of_range` is thrown           | Exception was caught                 | Passed  |
| Read front of empty queue        | `std::out_of_range` is thrown           | Exception was caught                 | Passed  |
| Read back of empty queue         | `std::out_of_range` is thrown           | Exception was caught                 | Passed  |

Capacity growth and internal wraparound are managed by `std::queue` and its
underlying Standard Library container rather than by the wrapper.

## Hash table

Implementation: custom fixed-size hash table with eight buckets and separate
chaining through `std::vector<Entry>` buckets.

|           Case            |                     Expected result                         |                       Actual result                         |    Status    |
|---------------------------|-------------------------------------------------------------|-------------------------------------------------------------|--------------|
| New table                 | Size is 0; missing key is absent; removing it returns false | All conditions were true                                    | Passed       |
| Insert a new key          | Key exists, value is 10, and size becomes 1                 | All conditions were true                                    | Passed       |
| Remove an existing key    | Removal returns true, size becomes 0, and key disappears    | All conditions were true                                    | Passed       |
| Insert multiple keys      | Three keys exist with values 10, 20, and 30                 | All keys and values matched                                 | Passed       |
| Update an existing key    | `key2` changes to 200 without increasing size               | Value became 200 and size remained unchanged                | Passed       |
| Look up a missing key     | `std::out_of_range` is thrown                               | Exception was caught                                        | Passed       |
| Insert colliding keys     | Every colliding key remains retrievable                     | All keys returned their correct values from the same bucket | Passed       |
| Remove a colliding key    | Only the selected key is removed                            | The other colliding keys remained retrievable               | Passed       |

## Demonstration program

The demonstration exercised all three structures:

- Stack values were popped as 30, 20, 10.
- Queue values were dequeued as Ana, Benjamin, Carlos.
- Hash-table values were inserted, retrieved, updated, and removed.
