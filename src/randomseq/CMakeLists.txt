#
# Cmake
#

## 環境設定

# バージョン
cmake_minimum_required(VERSION 3.21)

# プロジェクト名, 言語
project(randomseq C)

## 生成する実行ファイルの構成
add_library(randomseq randomseq.h randomseq.c)
target_include_directories(randomseq PUBLIC ./)
target_link_directories(randomseq PUBLIC ./)
