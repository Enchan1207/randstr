//
// ランダムな文字列の出力
//
// @2022 Enchan1207.
//
#include <sys/time.h>
#include <time.h>

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

    // 初期シード用の時刻情報を取得
    struct timeval time;
    int result = gettimeofday(&time, NULL);
    if (result != 0) {
        std::cerr << "an error occured while get current time information." << std::endl;
        std::cerr << "no." << errno << " message: " << std::strerror(1) << std::endl;
        return 1;
    }
    uint32_t seed = (uint32_t)time.tv_usec;

    // 時刻情報だけだと連続処理する際に面倒なことになりそうなので、適当な法則に従って何度かシードを更新する
    // でもこれ結局 「このコマンドの実行に1us以上かかる」ことが前提なので(1us以内に終了するなら同じ内容が出力されるはず)、
    // やっぱりあまり強力ではないのかもしれない 例えば、クソ強マシンで途中のパイプとして使った場合など…
    for (uint i = 0; i < seed % 10; i++) {
        Random::random(&seed);
    }

    // 生成して終了
    std::cout << RandStr::generate(&seed, validchars, length) << std::endl;

    return 0;
}
