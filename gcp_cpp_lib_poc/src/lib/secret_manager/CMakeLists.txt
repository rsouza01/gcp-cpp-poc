cmake_minimum_required(VERSION 3.9.1)

set(LIBRARY_OUTPUT_PATH  ${CMAKE_BINARY_DIR}/lib)

add_library(secret_manager SHARED secret_manager.cpp)
# add_library(secret_manager STATIC secret_manager.cpp)