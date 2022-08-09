# randstr

[![CMake](https://github.com/Enchan1207/randstr/actions/workflows/cmake.yml/badge.svg)](https://github.com/Enchan1207/randstr/actions/workflows/cmake.yml)

## Overview

シンプルなランダム文字列生成コマンド.  
パイプで繋いだり、適当な英数字列の生成に使ったり...

暗号学的に安全な方法で生成しているわけではないので、パスワードには使用しない方がいいと思います。
そのあたりは自己責任で…()

## Build

CMakeを使用してビルドできるようにしています。

```
mkdir build
cd build

cmake ..
make
make test
```

## LICENCE

このリポジトリは [MITライセンス](LICENSE) のもとで公開されています。
