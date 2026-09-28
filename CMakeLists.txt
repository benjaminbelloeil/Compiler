cmake_minimum_required(VERSION 3.20)

project(
    compiler_data_structures
    VERSION 0.1.0
    DESCRIPTION "Data structures used as preparation for a compiler project"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(data_structures_demo src/main.cpp)
target_include_directories(data_structures_demo PRIVATE include)

if(CMAKE_CXX_COMPILER_ID MATCHES "Clang|GNU")
    target_compile_options(data_structures_demo PRIVATE -Wall -Wextra -Wpedantic)
elseif(MSVC)
    target_compile_options(data_structures_demo PRIVATE /W4)
endif()

include(CTest)

if(BUILD_TESTING)
    add_executable(stack_test tests/stack_test.cpp)
    add_executable(queue_test tests/queue_test.cpp)
    add_executable(hash_table_test tests/hash_table_test.cpp)

    foreach(test_target IN ITEMS stack_test queue_test hash_table_test)
        target_include_directories(${test_target} PRIVATE include)
    endforeach()

    add_test(NAME stack_test COMMAND stack_test)
    add_test(NAME queue_test COMMAND queue_test)
    add_test(NAME hash_table_test COMMAND hash_table_test)
endif()

