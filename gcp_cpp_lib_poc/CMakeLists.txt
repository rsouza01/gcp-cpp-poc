cmake_minimum_required(VERSION 3.10...3.24)
project(mana-secretmanager CXX)

# find_package(google_cloud_cpp_secretmanager REQUIRED)

# MSVC requires some additional code to select the correct runtime library
if (VCPKG_TARGET_TRIPLET MATCHES "-static$")
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
else ()
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>DLL")
endif ()


set(SOURCES ./src/secret_client.cpp)

# Define your targets.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
message("CMAKE_BINARY_DIR: " ${CMAKE_BINARY_DIR})

add_subdirectory(src/lib/secret_manager)

add_executable(mana-secretmanager ${SOURCES})

target_link_libraries(mana-secretmanager secret_manager)

# target_link_libraries(mana-secretmanager google-cloud-cpp::secretmanager)
