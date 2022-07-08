#
# Cmake
#

## 環境設定

# バージョン
cmake_minimum_required(VERSION 3.21)

# プロジェクト名, 言語
project(randstr C)

# インクルードディレクトリ
include_directories(/usr/local/include)

# リンクディレクトリ
link_directories(/usr/local/lib)

# ターゲット生成
add_executable(randstr src/main.c)

# ターゲットにライブラリをリンク
target_link_libraries(randstr)
