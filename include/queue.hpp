#pragma once

#include <cstddef>
#include <stdexcept>

template <typename T>
class Queue {
public:
    Queue() = default;

    void enqueue(const T& value) {
        // TODO: Add value at the back of the circular buffer.
        (void)value;
        throw std::logic_error("Queue::enqueue is not implemented");
    }

    T dequeue() {
        // TODO: Remove and return the front value. Define empty-queue behavior.
        throw std::logic_error("Queue::dequeue is not implemented");
    }

    const T& front() const {
        // TODO: Return the front value without removing it.
        throw std::logic_error("Queue::front is not implemented");
    }

    const T& back() const {
        // TODO: Return the back value without removing it.
        throw std::logic_error("Queue::back is not implemented");
    }

    [[nodiscard]] bool empty() const noexcept {
        // TODO: Return whether the queue contains no elements.
        return true;
    }

    [[nodiscard]] std::size_t size() const noexcept {
        // TODO: Return the number of stored elements.
        return 0;
    }

private:
    // TODO: Add circular-buffer storage and front/back/size state.
};

