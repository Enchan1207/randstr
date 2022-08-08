cmake_minimum_required(VERSION 3.21)

add_subdirectory(randomseq)
add_executable(randstr
    main.cpp
)
target_link_libraries(randstr randomseq)
