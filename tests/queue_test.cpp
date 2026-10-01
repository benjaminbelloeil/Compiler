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

    // Throws error on dequeue if empty
    bool dequeue_threw = false;

    try {
        queue.dequeue();
    } catch (const std::out_of_range&) {
        dequeue_threw = true;
    }

    assert(dequeue_threw);

    // Throws error on front if empty
    bool front_threw = false;

    try {
        queue.front();
    } catch (const std::out_of_range&) {
        front_threw = true;
    }

    assert(front_threw);

    // Throws error on back if empty
    bool back_threw = false;

    try {
        queue.back();
    } catch (const std::out_of_range&) {
        back_threw = true;
    }

    assert(back_threw);

    assert(queue.empty());
    assert(queue.size() == 0);

    std::cout << "Queue tests passed.\n";
    return 0;
}