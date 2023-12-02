.PHONY: all build build-debug debug docs man pack watch watch-docs

OUT=simlib-random-break

all: build

build:
	cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
	cmake --build build --config Release --target all
	mv build/${OUT} .
