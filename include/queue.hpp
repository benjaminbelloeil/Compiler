#pragma once

#include <cstddef>
#include <queue>
#include <stdexcept>

template <typename T>
class Queue {
public:
    Queue() = default;

    void enqueue(const T& value) {
        data_.push(value);
    }

    T dequeue() {
        if (data_.empty()) {
            throw std::out_of_range("Queue is empty!");
        }

        T value = data_.front();
        data_.pop();
        return value;
    }

    const T& front() const {
        if (data_.empty()) {
            throw std::out_of_range("Queue is empty!");
        }

        return data_.front();
    }

    const T& back() const {
        if (data_.empty()) {
            throw std::out_of_range("Queue is empty!");
        }

        return data_.back();
    }

    [[nodiscard]] bool empty() const noexcept {
        return data_.empty();
    }

    [[nodiscard]] std::size_t size() const noexcept {
        return data_.size();
    }

private:
    std::queue<T> data_;
};

