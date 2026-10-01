#pragma once

#include <cstddef>
#include <stack>
#include <stdexcept>

template <typename T>
class Stack {
public:
    Stack() = default;

    void push(const T& value) {
        data_.push(value);
    }

    T pop() {
        if (data_.empty()) {
            throw std::out_of_range("Queue is empty!");
        }
        
        T value = data_.top();
        data_.pop();
        return value;
    }

    const T& top() const {
        if (data_.empty()) {
            throw std::out_of_range("Queue is empty!");
        }
        return data_.top();
    }

    [[nodiscard]] bool empty() const noexcept {
        return data_.empty();
    }

    [[nodiscard]] std::size_t size() const noexcept {
        return data_.size();
    }

private:
    std::stack<T> data_;
};

