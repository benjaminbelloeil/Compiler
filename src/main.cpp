#include "hash_table.hpp"
#include "queue.hpp"
#include "stack.hpp"

#include <iostream>
#include <string>

int main() {
    std::cout << "=== Stack demonstration ===\n";

    Stack<int> stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Stack size: " << stack.size() << '\n';
    std::cout << "Top value: " << stack.top() << '\n';

    while (!stack.empty()) {
        std::cout << "Popped: " << stack.pop() << '\n';
    }

    std::cout << "\n=== Queue demonstration ===\n";

    Queue<std::string> queue;
    queue.enqueue("Ana");
    queue.enqueue("Benjamin");
    queue.enqueue("Carlos");

    std::cout << "Queue size: " << queue.size() << '\n';
    std::cout << "Front: " << queue.front() << '\n';
    std::cout << "Back: " << queue.back() << '\n';

    while (!queue.empty()) {
        std::cout << "Dequeued: " << queue.dequeue() << '\n';
    }

    std::cout << "\n=== HashTable demonstration ===\n";

    HashTable<std::string, int> grades;
    grades.insert("Ana", 95);
    grades.insert("Benjamin", 90);
    grades.insert("Carlos", 88);

    std::cout << "Table size: " << grades.size() << '\n';
    std::cout << "Benjamin's grade: " << grades.get("Benjamin") << '\n';

    grades.insert("Benjamin", 100);

    std::cout << "Updated grade: " << grades.get("Benjamin") << '\n';

    grades.remove("Carlos");

    std::cout << "Contains Carlos: "
              << (grades.contains("Carlos") ? "yes" : "no")
              << '\n';

    std::cout << "\nAll demonstrations completed successfully.\n";
    return 0;
}