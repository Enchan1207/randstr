//
// ランダムな文字列の出力
//
// @2022 Enchan1207.
//

#include <cerrno>
#include <cstring>
#include <iostream>
#include <randstr.hpp>

int main(int argc, char const *argv[]) {
    // 有効文字列
    const std::string lower_alphabets = "abcdefghijklmnopqrstuvwxyz";
    const std::string upper_alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const std::string numbers = "0123456789";
    const std::string symbols = "!?:;.,+-_[]()";

    // TODO:コマンドライン引数によって有効文字列と生成文字数を決定
    std::string validchars = lower_alphabets + upper_alphabets + numbers + symbols;
    const uint32_t length = 20;

    // シード生成
    uint32_t seed = 0x00000000;
    int result = RandStr::generate_initial_seed(&seed);
    if (result != 0) {
        std::cerr << "an error occured while get current time information." << std::endl
                  << "No " << errno << ": " << std::strerror(errno) << std::endl;
        return 1;
    }

    // 生成して終了
    std::cout << RandStr::generate(&seed, validchars, length) << std::endl;

    return 0;
}
