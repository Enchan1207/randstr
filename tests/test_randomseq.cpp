//
//
//
#include <gtest/gtest.h>

#include <randstr.hpp>

// 乱数の生成
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

// 範囲付き
TEST(randstrTest, generateRangedRandomValue) {
    uint32_t seed = 0x12345678, *S = &seed;
    const uint32_t min = 100, max = 200;

    for (int i = 0; i < 100; i++){
        uint32_t num = Random::randrange(S, min, max);
        
        EXPECT_GE(num, min);
        EXPECT_LE(num, max);
    }
    
}
