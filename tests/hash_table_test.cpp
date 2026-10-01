#include "hash_table.hpp"

#include <cassert>
#include <iostream>
#include <stdexcept>
#include <string>
#include <cstddef>

// Table pointing to the same bucket (0 % 8 = 0)
struct ConstantHash {
    std::size_t operator()(const std::string& key) const noexcept {
        (void) key;
        return 0;
    }
};

int main() {
    HashTable<std::string, int> table;

    // New table
    assert(table.size() == 0);
    assert(!table.contains("missing"));
    assert(!table.remove("missing"));

    // Throws error on missing key
    bool missing_threw = false;

    try {
        table.get("missing");
    } catch (const std::out_of_range&) {
        missing_threw = true;
    }

    assert(missing_threw);
    
    // Insert one entry
    table.insert("key1", 10);
    assert(table.size() == 1);
    assert(table.contains("key1"));
    assert(table.get("key1") == 10);

    assert(table.remove("key1"));
    assert(table.size() == 0);
    assert(!table.contains("key1"));

    // Insert multiple entries
    table.insert("key1", 10);
    table.insert("key2", 20);
    table.insert("key3", 30);

    assert(table.size() == 3);
    assert(table.contains("key1"));
    assert(table.contains("key2"));
    assert(table.contains("key3"));

    assert(table.get("key1") == 10);
    assert(table.get("key2") == 20);
    assert(table.get("key3") == 30);

    // Update an existing key
    const std::size_t size_before_update = table.size();

    table.insert("key2", 200);

    assert(table.size() == size_before_update);
    assert(table.get("key2") == 200);

    // Colission in same bucket test
    HashTable<std::string, int, ConstantHash> collision_table;

    collision_table.insert("Ana", 10);
    collision_table.insert("Benjamin", 20);
    collision_table.insert("Carlos", 30);

    assert(collision_table.size() == 3);

    assert(collision_table.contains("Ana"));
    assert(collision_table.contains("Benjamin"));
    assert(collision_table.contains("Carlos"));

    assert(collision_table.get("Ana") == 10);
    assert(collision_table.get("Benjamin") == 20);
    assert(collision_table.get("Carlos") == 30);

    assert(collision_table.remove("Benjamin"));
    assert(!collision_table.contains("Benjamin"));
    assert(collision_table.size() == 2);

    assert(collision_table.get("Ana") == 10);
    assert(collision_table.get("Carlos") == 30);

    std::cout << "All HashTable tests passed.\n";
    return 0;
}
