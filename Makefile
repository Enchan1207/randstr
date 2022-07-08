#
#
#

.PHONY: configure build clean

BUILD_DIR=./build
PRODUCT_NAME=randstr
C_COMPILER_PATH=/usr/bin/gcc
CXX_COMPILER_PATH=/usr/bin/g++

# cmakeを使用してプロジェクトをビルドする。ビルドディレクトリが存在しない場合は先に configure を実行する。
build:
	@if [ ! -d ./$(BUILD_DIR) ]; then $(MAKE) configure;fi
	cmake --build $(BUILD_DIR) --config Debug --target all

configure:
	cmake \
		--no-warn-unused-cli \
		-DCMAKE_C_COMPILER:FILEPATH=$(C_COMPILER_PATH) \
		-DCMAKE_CXX_COMPILER:FILEPATH=$(CXX_COMPILER_PATH) \
		-S. \
		-B$(BUILD_DIR) \
		-GNinja

clean:
	@rm -rf $(BUILD_DIR)
