//
//
//

#pragma once

#include <random/random.hpp>
#include <string>

namespace RandStr {

/**
 * @brief 有効文字列と文字数を指定して、ランダムな文字列を生成します。
 *
 * @param validChars 生成する文字列に含めることができる文字の羅列
 * @param seed 乱数シード
 * @param length 生成する文字列の長さ
 * @return std::string 生成結果
 */
std::string generate(uint32_t *seed, const std::string validChars, const unsigned int length);

}  // namespace RandStr
