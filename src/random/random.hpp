//
// 乱数生成
//

#pragma once

#include <stdint.h>

namespace Random {

uint32_t random(uint32_t* seed);

uint32_t randrange(uint32_t* seed, uint32_t start, uint32_t end);

}  // namespace Random
