//
//
//
#include "randstr.hpp"

namespace RandStr {

std::string generate(uint32_t *seed, const std::string validChars, const unsigned int length) {
    std::string result = "";
    for (unsigned int i = 0; i < length; i++) {
        uint32_t index = Random::randrange(seed, 0, validChars.size() - 1);
        result += validChars[index];
    }
    return result;
}

}  // namespace RandStr
