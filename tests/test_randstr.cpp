//
//
//
#include <gtest/gtest.h>

#include <randstr.hpp>
#include <string>
#include <iostream>

// ランダム文字列の生成
TEST(randstrTest, generateRandStr) {
    uint32_t seed = 0x12345678, *S = &seed;
    std::string validChars = "0123456789";
    uint length = 32;

    // 生成される文字列の長さが指定した長さに一致する
    std::string result = RandStr::generate(S, validChars, length);
    EXPECT_EQ(result.size(), length);
}
