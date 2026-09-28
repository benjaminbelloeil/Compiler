#pragma once

#include <cstddef>
#include <functional>
#include <stdexcept>

template <typename Key, typename Value, typename Hash = std::hash<Key>>
class HashTable {
public:
    HashTable() = default;

    void insert(const Key& key, const Value& value) {
        // TODO: Insert a key/value pair or update an existing key.
        (void)key;
        (void)value;
        throw std::logic_error("HashTable::insert is not implemented");
    }

    Value& get(const Key& key) {
        // TODO: Return the value or define behavior for a missing key.
        (void)key;
        throw std::logic_error("HashTable::get is not implemented");
    }

    const Value& get(const Key& key) const {
        // TODO: Provide const lookup behavior.
        (void)key;
        throw std::logic_error("HashTable::get is not implemented");
    }

    [[nodiscard]] bool contains(const Key& key) const {
        // TODO: Search the appropriate bucket for the key.
        (void)key;
        return false;
    }

    bool remove(const Key& key) {
        // TODO: Remove the pair and report whether it existed.
        (void)key;
        return false;
    }

    [[nodiscard]] std::size_t size() const noexcept {
        // TODO: Return the number of key/value pairs.
        return 0;
    }

private:
    // TODO: Add buckets, a hash function, element count, and rehashing logic.
};

