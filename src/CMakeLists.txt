cmake_minimum_required(VERSION 3.21)

add_subdirectory(random)

add_library(randstr STATIC
    randstr.hpp
    randstr.cpp
)
target_link_libraries(randstr random)

include_directories(${PROJECT_SOURCE_DIR}/src)
