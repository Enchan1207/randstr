//
//
//
#include "random.hpp"

namespace Random {

uint32_t random(uint32_t* S) {
    uint32_t s = *S;
    s ^= s << 13;
    s ^= s >> 17;
    s ^= s << 15;
    *S = s;
    return s;
}

uint32_t randrange(uint32_t* seed, uint32_t start, uint32_t end) {
    uint32_t num = random(seed);
    return num % (end - start + 1) + start;
}

}  // namespace Random
