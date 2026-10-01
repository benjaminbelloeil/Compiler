# AI Usage Disclosure

This document records the AI assistance used for this assignment.

## Tool

- OpenAI Codex, used from September 28 through October 1, 2026.

## How the tool was used

Codex was used as a tutor and reviewer. It helped:

- Select C++ for the compiler project and use the `.cpp`/`.hpp` naming
  convention.
- Create and later explain the initial CMake project structure.
- Explain compilation, execution, CTest, headers, templates, references,
  const overloads, vectors, hashing, buckets, collisions, and iterators.
- Guide the manual implementation of `HashTable` one operation at a time.
- Review test cases and explain assertion failures and compiler diagnostics.
- Guide wrappers around the public Standard Library classes `std::queue` and
  `std::stack`.
- Draft the final demonstration and test-case documentation.
- Run CMake, CTest, and the demonstration program to verify documented results.

The student typed and reviewed the implementations while asking follow-up
questions whenever the behavior or syntax was unclear.

## Exact written prompts

The following material prompts directly contributed to the submitted project.
Short acknowledgements, repeated partial drafts, career discussion, and editor
setup questions are not included because they did not change the submitted
implementation.

1. "can you add the structure there with the ai usage and all that please in this folder"
2. "Okay so how does running and building work because im confused on the testing and all that"
3. "so whats the point of .cpp files in test, is that just test information and the main.cpp calls them to use them ? and the logic goes in the includes ?"
4. "Okay i want to start with hash tables"
5. "I am so lost on how this implementation work i think its overcomplicating it based on what i was aksed to do."
6. "okay now explain to me how everything works so i can understand it correctly and start learning from there"
7. "but whats the point of having different buckets with hashes ?"
8. "but how does key get the has number with a tring for example, becaue you cant really o \"key1\" % 8 and epect a number"
9. "yeah but how do both .get get distinguished ?"
10. "give me a list of test cases to have"
11. "Como lo puedo implementar con una libreria publica"
12. "Okay can we do all this in .hpp and then add the test cases to test.cpp"
13. "okay this is my .hpp for queue for now, what should i do ?"
14. "would this be correct:" followed by the proposed Queue implementation.
15. "now stack:" followed by the initial Stack implementation.
16. "is this correct:" followed by the proposed Stack implementation.
17. "is this correct for queue" followed by the proposed empty-queue exception tests.
18. "Okay now were missing the test cases for hash table"
19. "okay for missing out of of range would be like this:" followed by the proposed missing-key test.
20. "but why .get(\"missing\") ?"
21. "Okay and what else is missing to test in hashtable ?"
22. "how can we implement this?"
23. "Okay and explain to me how this works ?"

During the HashTable implementation, the student also submitted incremental
versions of `contains()`, `insert()`, `remove()`, and both `get()` overloads for
review. Codex explained syntax and behavior, and the student applied the changes.

## Student responsibility

The student is responsible for understanding, implementing, reviewing, and
testing the submitted code. The submitted source was reviewed incrementally,
and the final build, tests, and demonstration were executed before submission.
