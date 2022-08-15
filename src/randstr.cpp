//
//
//
#include "randstr.hpp"

#include <sys/time.h>
#include <time.h>

namespace RandStr {

std::string generate(uint32_t *seed, const std::string validChars, const unsigned int length) {
    std::string result = "";
    for (unsigned int i = 0; i < length; i++) {
        uint32_t index = Random::randrange(seed, 0, validChars.size() - 1);
        result += validChars[index];
    }
    return result;
}

int generate_initial_seed(uint32_t *S) {
    // 現在時刻のμs部分を取得し、初期シードとする
    struct timeval time;
    int result = gettimeofday(&time, NULL);
    if (result != 0) {
        return result;
    }
    uint32_t seed = (uint32_t)time.tv_usec;

    // 時刻情報だけだと連続処理する際に面倒なことになりそうなので、適当な法則に従って何度かシードを更新する
    for (unsigned int i = 0; i < seed % 10; i++) {
        Random::random(&seed);
    }
    *S = seed;

    return result;
}

}  // namespace RandStr
