#pragma once

#include <cstddef>
#include <stdexcept>

template <typename T>
class Stack {
public:
    Stack() = default;

    void push(const T& value) {
        // TODO: Add value to the top and resize storage when necessary.
        (void)value;
        throw std::logic_error("Stack::push is not implemented");
    }

    T pop() {
        // TODO: Remove and return the top value. Define empty-stack behavior.
        throw std::logic_error("Stack::pop is not implemented");
    }

    const T& top() const {
        // TODO: Return the top value without removing it.
        throw std::logic_error("Stack::top is not implemented");
    }

    [[nodiscard]] bool empty() const noexcept {
        // TODO: Return whether the stack contains no elements.
        return true;
    }

    [[nodiscard]] std::size_t size() const noexcept {
        // TODO: Return the number of stored elements.
        return 0;
    }

private:
    // TODO: Add dynamically managed storage, size, and capacity state.
};

