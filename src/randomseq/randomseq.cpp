//
// 乱数シーケンスの生成
//

#include "randomseq.h"

uint32_t xorShift32(Seed* S){
    uint32_t s = *S;
    s ^= s << 13;
    s ^= s >> 17;
    s ^= s << 15;
    *S = s;
    return s;
}

uint32_t next(Seed* S){
    return xorShift32(S);
}
