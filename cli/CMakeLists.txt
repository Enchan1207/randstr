cmake_minimum_required(VERSION 3.21)

add_executable(randstr_cli
    main.cpp
)
add_compile_options(randstr_cli -Wall)
target_link_libraries(randstr_cli randstr)

include_directories(${PROJECT_SOURCE_DIR}/src)
