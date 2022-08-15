//
//
//

#ifndef _RANDSTR_
#define _RANDSTR_

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

/**
 * @brief 乱数生成器の初期シードを生成します。
 *
 * @param seed 生成されたシードが格納されるポインタ
 * @return int 生成結果. 成功した場合は0, 失敗した場合は-1が返ります。
 *
 * @note 生成に失敗した場合は、*seedは更新されません。
 *       シードの生成にtimeval構造体を使用しているため、呼び出しには1μs以上の間隔を開けることを推奨します。
 */
int generate_initial_seed(uint32_t *seed);

}  // namespace RandStr

#endif
