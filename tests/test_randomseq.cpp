//
//
//
#include <gtest/gtest.h>

#include <randstr.hpp>

// ランダム文字列の生成
TEST(randstrTest, generateRandomValue) {
    uint32_t seed_1 = 0x12345678;
    uint32_t seed_2 = seed_1;

    // 乱数を生成するたびにシードが書き変わる
    uint32_t num_1 = Random::random(&seed_1);
    EXPECT_NE(seed_1, seed_2);

    // 同一シードから生成した乱数は常に同値
    seed_1 = seed_2;
    uint32_t num_2 = Random::random(&seed_1);
    EXPECT_EQ(num_1, num_2);
}
