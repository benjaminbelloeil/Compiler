#include "queue.hpp"

#include <cassert>
#include <iostream>

int main() {
    Queue<int> queue;

    // New queue
    assert(queue.empty());
    assert(queue.size() == 0);

    // Enqueue values
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    assert(!queue.empty());
    assert(queue.size() == 3);
    assert(queue.front() == 10);
    assert(queue.back() == 30);

    // FIFO order
    assert(queue.dequeue() == 10);
    assert(queue.dequeue() == 20);
    assert(queue.dequeue() == 30);

    assert(queue.empty());
    assert(queue.size() == 0);

    std::cout << "Queue tests passed.\n";
    return 0;
}