#!/bin/bash

rm -rf ./build/

cmake -H. -Bbuild
cd ./build
cmake --build .