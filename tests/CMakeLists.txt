cmake_minimum_required(VERSION 3.21)

find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(randstr_test
    test_randomseq.cpp
)
target_link_libraries(randstr_test
    PRIVATE
    GTest::gtest GTest::gtest_main
)
include_directories(${PROJECT_SOURCE_DIR}/src ${GTEST_INCLUDE_DIRS})

gtest_discover_tests(randstr_test)
