#include "stack.hpp"

#include <cassert>
#include <iostream>
#include <stdexcept>
#include <string>

int main() {
    Stack<int> stack;

    // New stack
    assert(stack.empty());
    assert(stack.size() == 0);

    // Push one value
    stack.push(10);

    assert(!stack.empty());
    assert(stack.size() == 1);
    assert(stack.top() == 10);

    // Push multiple values
    stack.push(20);
    stack.push(30);

    assert(stack.size() == 3);
    assert(stack.top() == 30);

    // top() should not remove anything
    assert(stack.top() == 30);
    assert(stack.size() == 3);

    // LIFO order
    assert(stack.pop() == 30);
    assert(stack.size() == 2);
    assert(stack.top() == 20);

    assert(stack.pop() == 20);
    assert(stack.pop() == 10);

    assert(stack.empty());
    assert(stack.size() == 0);

    // pop() should throw when the stack is empty
    bool pop_threw = false;

    try {
        stack.pop();
    } catch (const std::out_of_range&) {
        pop_threw = true;
    }

    assert(pop_threw);

    // top() should throw when the stack is empty
    bool top_threw = false;

    try {
        stack.top();
    } catch (const std::out_of_range&) {
        top_threw = true;
    }

    assert(top_threw);

    // Verify that the template also supports strings
    Stack<std::string> names;

    names.push("Ana");
    names.push("Benjamin");

    assert(names.top() == "Benjamin");
    assert(names.pop() == "Benjamin");
    assert(names.pop() == "Ana");
    assert(names.empty());

    std::cout << "All Stack tests passed.\n";
    return 0;
}