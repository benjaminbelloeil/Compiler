#pragma once

#include <cstddef>
#include <functional>
#include <stdexcept>
#include <utility>
#include <vector>

template <typename Key, typename Value, typename Hash = std::hash<Key>>
class HashTable {
public:
    HashTable() = default;

    void insert(const Key& key, const Value& value) {
        std::size_t index = bucket_index(key);
        auto& bucket = buckets_[index];
        for (Entry& entry : bucket) {
            if (entry.key == key) {
                entry.value = value;
                return;
            }
        }
        Entry new_entry{key, value};
        bucket.push_back(new_entry);
        ++size_;
    }

    Value& get(const Key& key) {
        std::size_t index = bucket_index(key);
        auto& bucket = buckets_[index];

        for (Entry& entry : bucket) {
            if (entry.key == key) {
                return entry.value;
            }
        }
        throw std::out_of_range("Key not found");
    }

    const Value& get(const Key& key) const {
        std::size_t index = bucket_index(key);
        auto& bucket = buckets_[index];

        for (const Entry& entry : bucket) {
            if (entry.key == key) {
                return entry.value;
            }
        }
        throw std::out_of_range("Key not found");
    }

    [[nodiscard]] bool contains(const Key& key) const {
        std::size_t index = bucket_index(key);
        const auto& bucket = buckets_[index];

        for (const Entry& entry : bucket ) {
            if (entry.key == key) {
                return true;
            }
        }

        return false;
    }

    bool remove(const Key& key) {
        std::size_t index = bucket_index(key);
        auto& bucket = buckets_[index];

        for (auto iterator = bucket.begin(); iterator != bucket.end(); ++iterator) {
            if (iterator->key == key) {
                bucket.erase(iterator);
                --size_;
                return true;
            }
        }

        return false;
    }

    [[nodiscard]] std::size_t size() const noexcept {
        return size_;
    }

private:
    struct Entry {
        Key key;
        Value value;
    };

    static constexpr std::size_t initial_bucket_count = 8;

    std::vector<std::vector<Entry>> buckets_{initial_bucket_count};
    Hash hasher_{};
    std::size_t size_{0};

    [[nodiscard]] std::size_t bucket_index(const Key& key) const noexcept {
        return hasher_(key) % buckets_.size();
    }
};