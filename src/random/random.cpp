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

}  // namespace Random
