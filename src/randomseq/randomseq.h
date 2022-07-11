//
// 乱数シーケンスの生成
//

#ifndef _RANDOM_SEQ_
#define _RANDOM_SEQ_

#include <stdint.h>

typedef uint32_t Seed;

uint32_t next(Seed*);

#endif
