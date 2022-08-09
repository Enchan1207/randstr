#
# randstr
#
cmake_minimum_required(VERSION 3.21)
project(randstr CXX)

enable_testing()

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)

add_subdirectory(src)
add_subdirectory(cli)
add_subdirectory(tests)
