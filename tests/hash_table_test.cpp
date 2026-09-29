#include "hash_table.hpp"

#include <iostream>
#include <string>
#include <cassert>

int main() {
    // TODO: Test insertion, updates, lookup, removal, collisions, and rehashing.
    HashTable<std::string, int> table;

    // New table
    assert(table.size() == 0);
    assert(!table.contains("missing"));
    assert(!table.remove("missing"));
    
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


    std::cout << "All HashTable tests passed.\n";
    return 0;
}
