# Test Cases

Document the input, expected result, actual result, and status for every test.
Replace `Not run` after implementing the structures.

## Stack

| Case | Expected result | Actual result | Status |
|---|---|---|---|
| New stack | `empty()` is true and `size()` is 0 | Not run | Pending |
| Push one value | `top()` returns that value and size is 1 | Not run | Pending |
| Push multiple values | The last pushed value is at the top | Not run | Pending |
| Pop multiple values | Values are returned in LIFO order | Not run | Pending |
| Pop an empty stack | The documented empty-stack error occurs | Not run | Pending |
| Exceed initial capacity | Storage grows without losing values | Not run | Pending |

## Queue

| Case | Expected result | Actual result | Status |
|---|---|---|---|
| New queue | `empty()` is true and `size()` is 0 | Not run | Pending |
| Enqueue one value | Both `front()` and `back()` return it | Not run | Pending |
| Enqueue multiple values | Front and back values are correct | Not run | Pending |
| Dequeue multiple values | Values are returned in FIFO order | Not run | Pending |
| Dequeue an empty queue | The documented empty-queue error occurs | Not run | Pending |
| Circular wraparound | Logical order remains correct | Not run | Pending |
| Exceed initial capacity | Storage grows without losing values | Not run | Pending |

## Hash table

| Case | Expected result | Actual result | Status |
|---|---|---|---|
| Insert a new key | Key exists, value is retrievable, size increases | Not run | Pending |
| Update an existing key | Value changes without increasing size | Not run | Pending |
| Look up a missing key | The documented missing-key error occurs | Not run | Pending |
| Remove an existing key | Pair disappears and size decreases | Not run | Pending |
| Remove a missing key | Operation reports false and size is unchanged | Not run | Pending |
| Insert colliding keys | Every colliding key remains retrievable | Not run | Pending |
| Exceed load threshold | Table rehashes without losing pairs | Not run | Pending |

